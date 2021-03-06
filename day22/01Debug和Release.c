#include<stdio.h>
#include<stdlib.h>

//Debug - Debut(调试)版本的可执行的程序
//Release s- Release(发布)版本的可执行程序
//通过Debug和Release都可以生成一个.exe文件
//区别
//Release相对Debug生成的.exe文件来说所占的空间要小 
//Debug称为调试版本，文件包含了调试信息，并且不做任何优化，便于程序员调试。所谓的调试信息就是加断点的方式，可以在窗口看到调试的信息，因此相对所占的空间更大
//Release称为发布版本，它往往是进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好的使用。
int main0101()
{
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

int main0102(void)
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	/*
	这里是验证Debug对比Release之前与之后的地址
	printf("%p\n", &i);
	printf("%p\n", arr);
	system("pause");
	*/

	for (i = 0; i <= 12; i++)//for(int i=0;i<=12;i++);i在循环内部定义，这是c++的语法，在语法上C并不支持这种写法，但在VS2017并不会检测出来，但在其它编译器下去这样写可能会编译不过 - 这不是C语言的语法，却能编译，说明VS2017这个IDE对于C语法的检测是不够严格的
	{
		printf("hehe\n");
		arr[i] = 0;
	}
	return 0;
	//使用Debug执行，发现这段代码是死循环
	//使用Release执行，发现总共输出13个hehe，和预想的结果吻合
	//说明Release版本的优化有可能在功能上也有所调整

	//死循环的原因
	//调试发现：
	//i=0到i<=9 - 打印10个hehe。 
	//然后回到上面自增，i变成10，并打印hehe，通过监视arr[10]里的元素是随机值，并把arr[10]里的元素更改为0 - 越界非法访问
	//再自增，i=11，printf(hehe),arr[11]里的元素是随机值，并把arr[11]=0; 
	//再自增,i=12，printf(hehe),发现arr[12]里的元素是12，并把arr[12]=0;同时也发现i变成了0，造成了死循环

	//问题1.为什么arr[10]、arr[11]、arr[12]都是越界，arr[10]和arr[11]里的元素都是随机数，而arr[12]里的元素却是12
	//问题2.为什么执行arr[12]=0时，i也变成了0

	//猜想：arr[12]和i是同一块内存空间
	//验证：如果arr[12]和i是同一块内存空间 - 那必然的它们的内存空间的地址是一样的
	//这里不能使用打印的形式，所以在监视里找它们的地址
	//&arr[12]和&i后的地址是一样的 - 是同一块空间 - 这也就是更改arr[12]后的值时i也改变的原因

	//为什么它两是同一块空间呢？？？
	//
	//				    _________	高地址  	                          数标  __________
	//                                  ____i____					   12   ____0____  - 越访 - arr[12]=i;
	//                                  _________					   11	____0____  - 越访 
	//                  数组下标:        _________				           10   ____0____  - 越访
	//			9           ____10___					    .	____0____ 
	//			8	    ____9____					    .	____0____
	//			7	    ____8____					    .	____0____
	//			6	    ____7____               ——————>>	            .	____0____
	//			5	    ____6____               ——————>>	            .	____0____
	//			4	    ____5____					    .	____0____	
	//			3           ____4____					    .	____0____
	//			2	    ____3____					    .	____0____
	//			1	    ____2____					    .	____0____
	//			0	    ____1____					    .	____0____
	//				    _________	低地址				        _________
	//  
	//   arr这个数组和i刚好相差2个是故意的吗？？？ - 确实就是这样故意画的 - 确实在内存中就是这样布局的 - 正因为是这样布局的就导致了死循环
	//	 i和arr都是局部变量，局部变量都放在栈上
	//	 栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
	//	 (此时i就放在了高地址处，而数组就随着下标的增长，地址由低到高的变化。所以数组如果合适的往后，就有可能在越界的过程中遇到i
	//   也就是说i<=12必然会死循环，i<=15也必然会死循环，i<=11就可以避免了死循环，但会报一个警告 - 栈空间被破坏 - 因为已经越界了

	//	 不同的IDE，死循环的位置也不同 - 在VC6.0下<=10就死循环 - 在Linux gcc下<=11就死循环 - 在VS2017下<=12就死循环

	//	如果把i和arr的位置交换也不会死循环 - 当arr向上访问时并不会遇到i也就不会死循环 - 但栈空间仍然会破坏
	//	这样写代码有点别扭 - 也不建议这样写 - 未来要么就不要写出越界的代码，要么理解清楚这其中的内存布局 - 写出越界的代码就可能导致死循环


	//再回到上面Release处 - 验证Release对代码的优化
	//在Debug下打印i和arr的地址： &i： 009BFCB4
	//							  arr：009BFC84
	//这里i的地址比arr的地址大

	//在Release下打印i和arr的地址： &i： 00FCF7A4
	//								arr：00FCF7A8
	//这里i的地址比arr的地址小 - 这样就不会导致死循环

	//Debug下i是在数组arr之前 - 只要数组越界合适后，就会死循环
	//Release下i在数组arr之后 - 数组arr在向上访问时并不会碰到i
	//最后也证实了Release
}

//包含一个stdio.h的头文件    
//stdio.h：标准输入输出库（std是一个标准库；i：input；o：output；）
//.h：头文件；<>：表示导入系统文件；""表示导入自己写的文件
#include<stdio.h>


//int：数据类型是整型，如果出现在函数中表示函数的返回值是整型；
//（）：里面表示函数的参数，函数的参数可以有多个，中间用逗号分隔；void：空，表示函数没有任何参数，可写可不写
//主函数--程序的入口；并且程序有且只有一个主函数main
int main0101(void)

//{}：函数体、代码体、程序体

{
	//printf：print function    这是C语言本身提供给我们的函数，既然不是我们的东西，那么使用它就需要向它打个招呼
	//功能是在输出设备上打印字符串；
	printf("Hello, world!\n");

	//;一条语句的结束；\n：表示换行
	printf("你好，世界!\n");

	//return：如果出现在其它函数中表示函数结束，如果出现在main函数中表示程序结束
	return 0;
}




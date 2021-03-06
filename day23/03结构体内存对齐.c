#include<stdio.h>

struct S1
{
	char c;//1和8取1
	int a; //4和8取4
	char d;//1和8取1
};
struct S2
{
	char c;
	char d;
	int a;	
};
struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c;
	struct S3 s3;//最大对齐数为8
	double d;
};
////结构体内存对齐：
////1.第一个成员在与结构体变量偏移量为0的地址处
////2.其它成员变量要对齐到某个数字（对齐数）的整数倍的地址处 
////对齐数=编译器默认的一个对齐数与该成员大小的较小值（vs中默认对齐数为8）
////3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
////如果是gcc或Linux编译器，没有默认对齐数这个概念，成员就是对齐数
////4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍数 - 8
////结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

int main0301()
{
	struct S1 s1 = { 0 };	
	printf("%d\n", sizeof(s1));//12；c - - - a a a a d - - -
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//8；c d - - a a a a
	struct S3 s3 = { 0 };
	printf("%d\n", sizeof(s3));//16；d d d d d d d d c - - - i i i i
	struct S4 s4 = { 0 };
	printf("%d\n", sizeof(s4));//32；//c - - - - - - - s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 s3 d d d d d d d d 
	return 0; 
}
//为什么存在内存对齐？在这里其实也没有具体官方的说法
/*1.平台原因（移植原因）：不是所有的硬件平台都能访问任意地址上的数据的；某些硬件平台只能在某些
地址处取某些特定类型的数据，否则抛出硬件异常。*/
/*2.性能原因：数据结构（尤其是栈）应该尽可能地在自然边界上对齐。原因在于，为了访问未对齐的内存，
处理器需要作两次访问；而对齐的内存访问仅需要一次访问。*/
//eg:
//struct S
//{
//	char c;
//	int a;
//};
//32位机器，32根地址线 - 每次访问4个字节
//未对齐：c a a a a - 如果要拿出a需要访问两次，第一次c a a a ，第二次 a - - -
//对齐：c - - - a a a a - 第一次c - - -，第二次a a a a
//

//总体来说：结构体的内存对齐是拿空间来换取时间的做法  

//那在设计结构体的时候，我们既要满足对齐，又要节省空间？ - 让占用空间小的成员尽量集中在一起


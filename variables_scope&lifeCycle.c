#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//作用域
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//int b = 2023;  // 全局变量
//
//int main() {
//
//	printf("1: %d\n", b);
//
////	{
//		int a = 10;
////	}
//
//	printf("%d\n", a);
//
//	printf("2: %d\n", b);
//
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
int main() {
	{
		int a = 10;
		printf("%d\n", a);
	}
	//printf("%d\n", a);
	return 0;
}

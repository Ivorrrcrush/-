#define _CRT_SECURE_NO_WARNINGS 1;

#include <stdio.h>

 	int a = 100; //全局变量 - {}外部定义的
//int main() {
	//创建一个变量
	//类型  变量名 = 表达式;
	//类型  变量名;
//	int age = 10;  //局部变量 - {}内部定义的	
	//当全局变量和局部变量名字冲突的情况下，局部优先
//	double weight = 55.5;

//	age += 1;
//	weight += 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//}

//%d - 整型
//%f - float
//%lf - double

//变量：
//局部变量
//全局变量
//------------------------------------
//写一个代码求2个整数的和
//scanf函数是输入函数


int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;

	//scanf_s函数 - VS编译提供的，不是C语言标准规定的
}

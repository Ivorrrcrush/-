#include <stdio.h>
//数据类型
//char      //字符数据类型
//short     //短整型
//int       //整型
//long      //长整型
//long long //更长的整型
//float     //单精度浮点数
//double    //双精度浮点数

//char a = 'a';
//int age = 20;
//short num = 10;
//float weight = 55.5;
//double d = 0.0;
int main(){
	//printf("hehe\n");
	//printf("%d\n",100);  //打印一个整数 - %d

	//sizaof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
	printf("%d\n", sizeof(char));     // 1
	printf("%d\n", sizeof(short));    // 2
	printf("%d\n", sizeof(int));      // 4
	printf("%d\n", sizeof(long));     // 4  sizepf(long)>= sizeof(int)
	printf("%d\n", sizeof(long long));// 8
	printf("%d\n", sizeof(float));    // 4
	printf("%d\n", sizeof(double));   // 8
}	

//计算机中的单位:
//bit - 比特位
//byte - 字节 = 8 bit
//kb = 1024 byte
//mb = 1024 kb
//gb = 1024 mb
//tb = 1024 gb
//pb = 1024 tb

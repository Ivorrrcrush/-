#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

//十个数中找最大值
//int main() {
//
//	//数组
//	int arr[10] = { 0 };
//
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d\n", &arr[i]);
//	}
//
//	//找最大值
//	int max = 0;
//	for (i = 0; i <= 9; i++) {
//		if (max < arr[i]) {
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max = %d\n", max);
//
//	return 0;
//}

//十个整数的平均值
int main() {
	//数组
	int arr[10] = { 0 };
	//输入
	int i = 0;
	int sum = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	//求和
	//int sum = 0;
	//for (i = 0; i <= 9; i++) {
	//	sum += arr[i];
	//}
	//求平均数
	int a = sum / 10;
	//输出
	printf("a = %d\n", a);
	
	return 0;
}

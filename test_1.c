#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>

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

//int main() {
//	//数组
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	//求和
//	//int sum = 0;
//	//for (i = 0; i <= 9; i++) {
//	//	sum += arr[i];
//	//}
//	//求平均数
//	int a = sum / 10;
//	//输出
//	printf("a = %d\n", a);
//	
//	return 0;
//}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int* p = arr;
	//for (i = 0; i < 10; i++) {
	//	printf("%d ", arr[i]);
	//}
	for (i = 0; i < 10; i++) {
		printf("%d ", *p);
		p++;
	}

}

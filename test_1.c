#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
int main() {
	//数组
	int arr[10] = { 0 };
	//输入
	int i = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d\n", &arr[i]);
	}
	//找最大值
	int max = arr[0];
	for (i = 1; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	//输出
	printf("max = %d\n", max);
}
#include <string.h>
int search(int arr[],int a,int sz) {
	int left = 0;
	int right = sz - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[left] < a) {
			left = mid;
		}
		else if (arr[right] > a) {
			right = mid;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int key = 7;

	int sz = sizeof(arr) / sizeof(arr[0]);

	int x = search(arr, key,sz);
	if (-1 == x) {
		printf("没找到\n");
	}
	else {
		printf("找到了,下标是：%d ",x );
	}
	return 0;
}



int add(int* a) {
	(*a)+=1;
}
int main() {
	int num = 0;	
	int* p = &num;
	
	for (int a = 1; a <= 10; a++) {
		add(p);
		printf("%d ", num);
	}
	return 0;
}

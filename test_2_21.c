//在一个有序数组中查找n
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int L = 0;
	int R = sz - 1;
	
	while (L<=R) {
		int mid = (L + R) / 2;
		if (arr[mid] < i) {
			L = mid + 1;
		}
		else if (arr[mid] > i) {
			R = mid - 1;
		}
		else {
			printf("found,下标是%d\n",mid);
			break;
		}
	}
	if (L > R) {
		printf("not found 404\n");
	}
	return 0;
}

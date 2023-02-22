#include <string.h>
#include <windows.h>
//welcome to origin
//-----------------
int main() {
	char arr1[] = { "welcome to origin" };
	char arr2[] = { "-----------------" };

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right) {
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(500);
		system("cls");    //清空屏幕
		left++;
		right--;
		printf("%s\n",arr2);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1;
#include <string.h>
#include <stdio.h>


int cmp(int a, int b) {
	if (a > b) {
		printf("%d\n", a);
	}
	else {
		printf("%d", b);
	}
}

int main() {
	int a = 10;
	int b = 20;
	cmp(a, b);
	return 0;
}

--------------------------------------

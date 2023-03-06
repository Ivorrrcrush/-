int main() {
	a:printf("hehe\n");
	printf("haha\n");

	goto a;
	return 0;
}

#include <string.h>
int main() {
	int a;
	system("shutdown -s -t 60");
	b:
	printf("ur PC will dead in 60s,unless type \1\n");
	scanf("%d", &a);
	if (a == 1) {
		system("shutdown -a");
	}
	else {
		goto b;
	}

	return 0;
}

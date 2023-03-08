int main() {
	a:printf("hehe\n");
	printf("haha\n");

	goto a;
	return 0;
}

#include <string.h>
#include <stdlib.h>
int main() {
	char a[20] = { 0 };
	system("shutdown -s -t 60");
	b:
	printf("ur PC will dead in 60s,unless type \1\n");
	scanf("%s", a);
	if (strcmp(a,"我是猪") == 0){
		system("shutdown -a");
	}
	else {
		goto b;
	}

	return 0;
}
//goto语句只能在一个函数内跳转，不能跨函数

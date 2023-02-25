define _CRT_SECURE_NO_WARNINGS 1;
#include<stdio.h>
#include<string.h>

int main() {
	char user[20] = { 0 };
	char password[20] = { 0 };
	printf("plz keyboard user\n");
	scanf("%s", user);

	while (strcmp(user, "3088722509") != 0) {
		printf("cannot find this user name,plz try again\n");
		scanf("%s", user);
	}
	printf("plz keyboard password\n");
	scanf("%s", password);
	int a = 5;
	while (strcmp(password, "nez12978635") != 0) {
		printf("%s,less %d chance\n", "error", a);
		scanf("%s", password);
		a--;
		if (a == 0) {
			break;
		}
	}
	printf("log in!!!");
	return 0;
	// /
}

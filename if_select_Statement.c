//#define _CRT_SECURE_NO_WARNINGS 1;
//#include <stdio.h>
//
//int main() {
//	printf("自学成才：）\n");
//	printf("要好好学习吗？：）\n");
//	int a;
//	scanf("%d", &a);
//	if (a == 1)
//		printf("上天");
//	else
//		printf("搬砖");
//	return 0;
//}

/*int main() {

	int age = 60;

	if (age < 18) {
		printf("少年\n");
	}else if (18 <= age && age < 26) {
		printf("青年\n");
	}else if ("age>=2 6&& age<40") {
		printf("中年\n");
	}else if (age >= 40 && age < 60) {
		printf("壮年\n");
	}else if (age >= 60 & age < 100) {
		printf("老年\n");
	}else {
		printf("老不死\n");
	}*/

	/*if (age >= 18) {
		printf("成年\n");
	}else {
		printf("未成年\n");
		printf("不能谈恋爱\n");
	}*/

	/*if (age >= 18) {
		printf("%s\n", "成年");
	}*/
	

//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2) {
//			printf("hehe\n");
//		}else {
//			printf("haha\n");
//		}
//	}
//}


//int test() {
//	if (0) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//	test();
//	return 0;
//}


//int main() {
//	int num = 3;
//	//if (num == 5)
//	if(5 =num){
//		printf("hehe\n");
//	}
//	return 0;
//}

int main() {
	//判断一个数是不是奇数
	//int num;
	//scanf("%d", &num);
	//if ( 1 == (num % 2)) {
	//	printf("%d是%s\n", num, "奇数");
	//}else {
	//	printf("%d不是%s\n", num, "奇数");
	//	return 0;
	//}

	//打印1-100之间的奇数
	int a = 1;

	for (int sum = 1; sum <= 100; sum++) {

		a++;

		if (1 == (sum % 2)) {

			printf("%d ", sum);

			if (0 == (a % 5)) {

				printf("\n");

			}
		}
	}
	return 0;
}

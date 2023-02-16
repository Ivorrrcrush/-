//int main() {
//	// 爱你三千年
//
//	int year = 0;
//	//循环
//	while (year < 3000) {
//		printf("爱你 — %d\n", year);
//		year++;
//	}
//	if (year == 3000); {
//		printf("下一位");
//	}
//	return 0;
//}


//int main() {
//	//在while循环中，break用于永久的中止循环
//	//在while循环中，continue用于跳过本次循环continue后面的代码，直接去判断部分，看是否进行下一次循环
//	int i = 1;
//
//	while (i <= 10) {
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//
//		i++;
//
//	}
//	/*while (i <= 10) {
//		if (i == 5) {
//			break;
//		}
//
//		printf("%d ", i);
//		i++;
//	}*/
//	return 0;
//}

//getchar

//EOF - end of file - 文件结束标志
//int main() {
//	int ch = 0;
//	//ctrl + z - getchar读取结束
//	while ((ch = getchar()) != EOF) {
//
//		putchar(ch);
//
//	}
//}


//int main() {
//	char password[20] = { 0 };
//	
//	printf("plz kaybord password\n");
//
//	scanf("%s", password);
//	//清理缓冲区
//	//getchar(); //处理 '\n'
//	//清理缓冲区中的多个字符
//	int tmp;
//	while ((tmp = getchar()) != '\n') {
//
//	}
//	printf("plz check ur password(Y/N)\n");
//	int ch = getchar();
//	if (ch == 'Y') {
//		printf("check in");
//	}else{
//		printf("error\n");
//	}
//	return 0;
//}

int main() {
	int ch = 0;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}

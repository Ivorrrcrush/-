//int main() {
//	int day;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	
//}


int main() {
	int m = 2;
	int n = 1;
	switch (n) {
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n) {
		case 1:
			n++;
		case 2:
			m++;
			n++;
			break;
		}
	case 4:
		m++;
	default:
		break;
	}
	printf("m = %d,n = %d", m, n);
	return 0;
}

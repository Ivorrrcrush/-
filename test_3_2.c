// 1000 - 2000 之间的闰年
int main() {
	int y = 0;
	for (y = 1000; y <= 2000; y++) {
		if ((y%4==0) && (y%100 != 0) || y%400 == 0) {

			printf("%d ", y);
			/*if (y % 100 != 0 ) {
				printf("%d ", y);
			}*/
		}
		/*if (y % 400 == 0) {
			printf("%d ", y);
		}*/
	}
	return 0;
}

//100 - 200 之间的素数
int main() {
	int s = 0;
	int m = 0;
	a : for (s = 100; s <= 200; s++) {
		for (m = 2; m < s ; m++) {
			if (s % m == 0) {
				break;
			}
		}
		
		
		if (m == s) {
			printf("%d ", s)
		}
		
	}
	return 0;
}

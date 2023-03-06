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

//优化

#include <math.h>
int main() {
	int s = 0;
	int m = 0;
	for (s = 101; s <= 200; s+=2) {
		int a = 1;
		for (m = 2; m <= sqrt(s) ; m++) {
			if (s % m == 0) {
				a = 0;
				break;
			}
		}
		
		
		if (a == 1) {
			printf("%d ", s);
		}
		
	}
	return 0;
}

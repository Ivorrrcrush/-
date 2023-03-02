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

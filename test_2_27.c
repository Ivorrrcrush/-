int main() {
	int a, b,c,d;
	scanf("%d%d", &a, &b);
	int i = 0;
	if (a < b) {
		c = a;
	}
	else {
		c = b;
	}
	for (i = c;i>=0; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d\n", i);
			break;
		}
	}


	return 0;
}
//苛待补充.....
//

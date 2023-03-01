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
int main() {
	int a, b, c;
	scanf("%d%d",&a,&b);
	//int c = a % b;
	/*while (1) {
		if (a % b != 0) {
			a = b;
			b = c;
		}
		else {
			printf("%d\n", c);
			break;
		}
	}*/

	while (c = a % b) {
		a = b;
		b = c;
	}

	printf("%d\n", b);

	return 0;
}

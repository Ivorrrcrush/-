//计算n的阶乘
int main() {
	int n;
	int i,j;
	int a = 1;
	int sum = 0;
	scanf("%d", &n);
	//计算1!+2!+3!....+10!
	for (j = 1; j <= n; j++) {
		for (i = 1; i <= n; i++) {
			a *= i;
		}
		sum += a;
	}

	
	printf("%d", sum);
	return 0;
}

int Add(int x, int y) {
	int z = x + y;
	return z;
}

int main() {
	int num1 = 0, num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	return 0;
}

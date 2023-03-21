int judge_year(int x) {
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int y = 0;
	int count = 1;
	for (y = 1000; y <= 2000; y++) {
		if (judge_year(y) == 1) {
			printf("%d ", y);
			count++;
		}
	}
	printf("\n %d \n", count);
	return 0;
}

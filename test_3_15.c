#include <math.h>
int judge(int x) {
	int y = 0;
	for (int y = 2; y <= sqrt(x); y++) {
		if (x % y == 0) {
			
		}
	}
	return 1;
}

int main() {
	int i = 0;
	for (i = 101; i <= 199; i += 3) {
		if (judge(i) == 1) {
			printf("%d ", i);
		}
	}
	return 0;
}

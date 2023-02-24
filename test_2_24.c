//写一个猜数字游戏
void menu() {
	printf("---------------------------\n");
	printf("----------1.play-----------\n");
	printf("----------2.exit-----------\n");
	printf("---------------------------\n");
}

void game() {
	
	int ran = rand()%100 + 1;
	int a;

	//printf("%d\n", ran);
	while (1) {
		printf("plz keyboard a number\n");
		scanf("%d", &a);
		if (a < ran) {
			printf("lower\n");
		}else if (a > ran) {
			printf("higher\n");
		}else{
			printf("win\n");
			break;
		}
	}
}

int main() {
	int input;
	srand((unsigned int)time(NULL));

	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		}
	} while (input);


	return 0;
}

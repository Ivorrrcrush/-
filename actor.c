//int main() {
//	//int a = 9 / 2;
//	//float a = 9.0 / 2;
//	int a = 9 % 2;
//	printf("%d", a);
//	return 0;
//}

//int main() {
//	int a = 2;
//	int b = a << 1;
//	//左移运算符 - 移动的是二进制位
//	printf("%d\n", b);
//	return 0;
//}

//int main() {
//	//0 表示假，非零就是真
//	int a = 10;
//	printf("%d\n", !a);
//	if (a) {
//		....
//	}
//	if (!a) {
//		....
//	}
//	return 0;
//}

//int main() {
//	//sizeof 是一个操作符
//	//不是函数
//	//计算类型或者变量的大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);

//int arr[10] = { 0 };
//printf("%d\n", sizeof(arr)); //计算的是数组的总大小，单位是字节
//printf("%d\n", sizeof(arr[0]));
//int sz = sizeof(arr) / sizeof(arr[0]);
//printf("%d\n", sz);
//	return 0;
//}

//int main() {
//	int a = 0;
//	//00000000000000000000000000000000
//	printf("%d\n", ~a);
//	//整数在内存中存储的是补码
//	//一个整数的二进制表示有三种
//	//源码
//	//反码
//	//补码
//	// 
//	// 
//	//-1 - 负数的计算方式
//	//1000000000000000000000000000001(源码)
//	//1111111111111111111111111111110(反码) - 符号位不变，其他位按位取反
//	//1111111111111111111111111111111(补码) - 反码+1
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = a++; //前置++ - 先使用，后++
//
//	//int a = 10;
//	//int b = ++a; //前置++ - 先++，后使用
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main() {
//	//强制类型转换
//	int a = (int) 3.14;
//	printf("%d\n", a);
//	return 0;
//}

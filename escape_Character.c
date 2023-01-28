#include <stdio.h>

//int main() {
//	//转义字符 - 转变了原来的意思
//	//printf("c\test\test.c");
//	printf("ab\ncd");
//	return 0;
//}

//int main() {
//	//printf("(are you ok??)");//??) --> ] - 三字母词
//	//(are you ok]
//
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");
//	//printf在打印数据的时候，可以指定打印的格式
//	return 0;
//}

int main() {
	//\ddd - ddd表示1-3个八进制的数字，如 \130	X
	// \xdd表示2个十六进制数字，如 \x30 0
	// 
	printf("%c\n", '\130');
	//X  --  ASCII码值是88；
	printf("%c\n", '\101'); //A - 65 - 8进制是：101
	printf("%c\n", '\x30'); //48 - '0'
	//printf("%d\n", strlen("abc")); //3
	printf("%d\n", "c:\test\328\test.c");
	return 0;
}

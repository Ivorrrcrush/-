#include <stdio.h>
#include <string.h>

int main() {
	"abcdef";
	"hello ivor";

	//字符数组 - 数组是一组相同类型的元素
	//字符串在结尾的位置隐藏了一个\0字符
	//\0是字符串的结束标志
	char arr[] = "hello";

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	//打印字符串 - %s
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);

	//int len = strlen("abc"); //引用头文件 - #include <string.h>
	//printf("%d\n", len);

	//求一下字符串长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	return 0;
}

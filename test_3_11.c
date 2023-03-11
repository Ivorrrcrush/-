int main() {
	char a[20] = { 0 };
	char b[] = { "hello world" };
	strcpy(a, b);
	printf("%s\n",a);
}

int main() {
	char a[] = { "hello world" };
	memset(a, 'x', 5);

	printf("%s\n", a);
	return 0;
}

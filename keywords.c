//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字
auto break case char const continue default do double else enum 
extern float for foto if int long register return short signed 
sizeof static struct swich typedef union unsigned void volatile while
// 
//static - 静态的
//union - 联合体（共用体）
//void - 无、空

auto - 是自动的 - 每个局部变量都是auto修饰的
//int main() {
//	//int char;
//	{
//		auto int a = 10; //自动创建，自动销毁 - 自动变量
//		//auto 省略掉了
//	}
//	return 0;
//}

register - 寄存器关键字
//int main() {
//	//大量、频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100; //建议num的值放在寄存器中
//	return 0;
//}

typedef - 类型重定义
//typedef unsigned int u_int;
//int main() {
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static - 静态的
//1.修饰局部变量 - 改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//2.修饰全局变量 - 使得这个全局变量只能在自己所在的源文件（.c）内部使用	
全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量
//3.修饰函数 - 使得函数只能在自己所在的源文件使用，
本质上：static是将函数的外部链接属性变成了内部链接属性
//
//void test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		i++;
//		test();
//	}
//	return 0;
//}

//extern - 声明外部符号
//extern int a;
//int main() {
//	printf("%d\n", a);
//	return 0;
//}

//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("sum = %d\n", Add(a, b));
//	return 0;
//}


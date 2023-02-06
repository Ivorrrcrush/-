//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.变量名不能是关键字
//auto break case char const continue default do double else enum 
//extern float for foto if int long register return short signed 
//sizeof static struct swich typedef union unsigned void volatile while
// 
//auto - 是自动的 - 每个局部变量都是auto修饰的
//extern - 是用来申明外部符号的
//register - 寄存器关键字
//static - 静态的
//union - 联合体（共用体）
//void - 无、空

//int main() {
//	//int char;
//	{
//		auto int a = 10; //自动创建，自动销毁 - 自动变量
//		//auto 省略掉了
//	}
//	return 0;
//}

//int main() {
//	//大量、频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100; //建议num的值放在寄存器中
//	return 0;
//}

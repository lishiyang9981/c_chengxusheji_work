//#include<stdio.h>
//int main()
//{
//	{
//		int loce = 30001;
//		printf("loce=%d\n", loce);
//	}
//	extern int love;//调用外部同一工程内的全局变量
//	printf("love=%d\n", love);
//	return 0;
//}




//#include<stdio.h>
////包含一个叫stdio.h的文件
////std--标准 standard    input output
////int 是整型
//int main()//主函数——程序的入口——main函数有且只有一个
//	{
//	// 这里完成任务
//	//在屏幕上输出 hehe
//	//函数——printf //function——printf——打印函数、
//	//库函数——c语言本身提供给我们使用的函数
//	//别人的东西——打招呼
//	//include
//		printf("hehe\n");
//		return 0;// 返回 0
//	}



//#include<stdio.h>
//int main()
//{
//
//	char AAA = 'h';//字符用'引起来
//	printf("%c", AAA);//%c与char组合
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));////1个字节
//	printf("%d\n", sizeof(short));//2~
//	printf("%d\n", sizeof(int));//4~
//	printf("%d\n", sizeof(long));//4（可以是8）~
//	printf("%d\n", sizeof(long long));//8~
//	printf("%d\n", sizeof(float));//4~
//	printf("%d\n", sizeof(double));//8~
//	printf("%d\n", sizeof(long double));//8~
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	short age = 22;//向内存申请两个字节=16个bit位，用来存放22。
//	float weight = 100.1;//向内存申请了四个字节存放小数。
//
//	return 0;
//}

//#include<stdio.h>
//int num = 22;//全局变量--定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 23;//局部变量--定义在代码块（{}）内部的变量
//	return 0;
//}


//#include<stdio.h>
//int a = 11;
//int main()
//{
//	int a = 22;
//	//!!!局部变量名字和全局变量名字相同时可以同时存在，但局部变量优先输出。
//	//!!!建议不要将局部变量名字和全局变量名字相同。
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//将scanf改写为scanf_s,防止缓冲区溢出	
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




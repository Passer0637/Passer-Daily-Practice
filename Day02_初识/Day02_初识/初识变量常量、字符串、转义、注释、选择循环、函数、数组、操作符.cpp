#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
//局部变量的作用域就是变量所在的局部范围
//全局变量的作用域是整个工程
//int g_val = 2022;
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("你好\n");
//	{	
//		printf("2:%d\n", g_val);
//
//		int a = 110;
//		printf("%d\n", a);
//	}
//
//	printf("3:%d\n", g_val);
//
//	return 0;
//}

////声明变量
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//变量的生命周期：变量创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//常量
//#define MAX 10000
//int main()
//{
//	//1.字面常量
//	// 3.14;
//	// 10;
//	// 'a';
//	// "abcdef";
//	
//	//2.const修饰的常变量
//	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	//num = 20;
//	//printf("num - %d", num);//20
//
//	//int arr[10] = {0};//10个元素
//	//const int n = 10;
//	//int arr2[n] = {0};//n是变量，这里不行
//
//	//3.define 定义的标识符常量
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	//4.枚举常量
//	//可以一一列举的常量
//	//性别
//	enum Sex
//	{
//		//这种枚举类型的变量的未来可能取值
//		MALE = 3,//赋初值
//		FEMALE,
//		SECRET
//	};
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//3
//	printf("%d\n", FEMALE);//4
//	printf("%d\n", SECRET);//5
//
//	return 0;
//}

#include <string.h>
//int main()
//{
//	// 字符数组 - 数组是一组形同类型的元素
//	// 字符串在结尾的位置隐藏了一个 \0 的字符
//	// \0 是字符串的结束标志
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	//求一下字符串长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//会产生随机值
//
//	//int len = strlen("abc");//要引用头文件 #include <string.h>
//	//printf("%d\n", len);//3,不包含 \0 长度
//
//	//打印字符串
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//转义字符
//int main()
//{
//	printf("F:\C++\Day02_初识");
//	printf("ab\ncd");// 转义 ==> 换行
//
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok??)");//??) ==> ] - 三字母词
//	//（are you ok]
//	 
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("F:\\tC++\\tDay02_初识");
//	//printf("\a\a\a\a\a\a");//蜂鸣
//
//	//printf("%c\n", '\130');//8进制130是十进制的88
//	//X -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 ==> 八进制:101
//	//printf("%c\n", '\x30');
//
//	printf("%d\n", strlen("F:\te++\328\tay02"));//13个字符
//	return 0;
//}

//int main()
//{
//	int input = 0;
//
//	printf("你好\n");
//	printf("你要好好学习吗（1/0）?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好");
//	else
//		printf("卖红薯");
//	
//	return 0;
//}

//C++ - 30000代码 - 找一个不错的工作
//int main() 
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好");
//	}
//	
//
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	//函数方法解决
//	int sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//数组 - 一组相同类型的元素的集合
//	//10个整型 1-10 存起来
//	//数组是用下标来访问的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a', 'b', 'c' };//不完全初始化，剩余默认为零
//}

//int main()
//{
//	int a = 9 / 2;
//	float b = 9 / 2.0;
//	int c = 9 % 2;//取余
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//左移操作符 - 移动的是二进制位 000000010 ==> 2 - 00000100 ==> 4
//	
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//
//	a = a - 3;
//	a -= 3;
//
//	a = a % 3;
//	a %= 3;
//
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//单目操作符：只有一个操作数
//	int a = 0;
//	// 0 表示假，非 0 就是真
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//如果 a 为真，做事
//	}
//	if (!a)
//	{
//		//如果 a 为假，做事
//	}
//	a = -5;
//	a = +a;
//
//	return 0;
//}

//int main()
//{
////	//sizeof 是一个操作符
////	//计算类型或者变量大小的
////	int a = 10;
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof a);
//	// 10 * 4 = 40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0])); //4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz); //10
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int  main()
//{
	//算术操作符
	//double a = 3 / 5;//0
	//double b = 6.0 / 5;
	//printf("%f\n", a);
	//printf("%f\n",b);
	//int c = 7 % 3;//1
	//printf("%d\n", c);
	//移位操作符
	//int a = 2;
	//把 a 二进制位向左移动一位，右边补 0 
	//int b = a << 1;
	//int a = 10;
	//int b = a >> 1;
	//int a = -1;
	//int b = a >> 1;
	//当前的右移操作符使用的是算术右移
	//位操作符
	//int a = 3;
	//int b = 5;
	//int c = a & b;
	//int d = a | b;
	//int e = a ^ b;
	//int a = 10;
	//int b = 20;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a = %d  b = %d\n", a, b);
	//printf("%d\n", c);
	//printf("%d\n", d);
	//printf("%d\n", e);
	//int a = 13;
	//a = a | (1 << 4);
	//printf("a = %d\n", a);//29
	//a = a & ~(1 << 4);
	//printf("a = %d\n", a);//13
	//赋值操作符
	//int a = 10;
	//a = 100;
	//a += 100;
	//a >>= 3;
	//单目操作符 - 只有一个操作数
	//int flag = 5;
	//if (flag)//flag 为真
	//{
	//	printf("Hello");
	//}if (!flag)//flag 为假
	//{
	//	printf("hello");
	//}
	//int a = 10;
	//int arr[10] = { 0 };
	//a = -a;
	//printf("%d\n", a);
	//printf("%p\n", &a);
	//printf("%d\n", sizeof (arr));
	//printf("%d\n", sizeof  arr);//sizeof 是一个操作符，不是函数
	//short s = 5;
	//int a = 10;
	//printf("%d\n", sizeof(s = a + 2));//2
	//printf("%d\n", s);//5
	//int a = -1;//补码取反
	//int b = ~a;
	//printf("%d\n", b);
	//int a = 10;
	//int b = a++;//先加后用
	//printf("b = %d\n",b);
	//printf("a = %d\n", a);
	//int c = ++a;
	//printf("c = %d\n", c);
	//printf("a = %d\n", a);
	//int a = 10;
	//printf("a = %p\n", &a);
	//int* pa = &a;//pa是用来存放地址的 - pa就是一个指针变量
	//*pa = 20;// * 被称为解引用操作符 - 间接访问操作符
	//printf("a = %d\n", a);
	//int a = (int)3.14;
	//printf("a = %d\n", a);
	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40
	//printf("%d\n", sizeof(ch));//10
	//关系操作符
	//int a = 3;
	//int b = 5;
	//if (a == b)//a >= b、a > b
	//{
	//	return 1;
	//}
	//if (a != b)//a <= b
	//{
	//	return 111;
	//}
	//比较两个字符串相等不能使用 == 
	//逻辑操作符
	//int a = 3;
	//int b = 0;
	//if (a && b)//两个条件同时满足
	//{
	//	printf("你好\n");
	//}
	//if (a || b)//两个条件只需要满足一个
	//{
	//	printf("你是谁\n");
	//}
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	////i = a++||++b||d++;
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	//三目操作符
	//int a = 5;
	//int b = 0;
	//b = (a > 5 ? 1 : -1);
	//printf("b = %d\n", b);
	//逗号表达式 - 从左向右依次计算，但是整个表达式的结果是最后一个表达式的结果
	//int a = 3;
	//int b = 5;
	//int c = 0;
	//int d = (c = 5, a = c + 3, b = a - 4, c += 5);
	//printf("%d\n", d);
	//return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}

//结构体
//书：书名，书号，出版社，作者，定价
//人：年龄，性别，姓名
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};

//int main()
//{
	//int arr[10] = { 1, 2, 3, 4 ,5, 6, 7 ,8, 9 };
	//printf("%d\n", arr[4]);// [] - 下标引用操作符 ; 操作数有两个： arr、[]
	//
	//int ret = Add(3, 250);// ( ) - 函数调用操作符
	//printf("%d\n", ret);
	//
	//int num = 10;
	//  . 操作符；结构体变量名.成员名
	//struct Book b = { "C语言", "C20210509", 55 };
	//printf("书名：%s\n", b.name);
	//printf("书号：%s\n", b.id);
	//printf("定价：%d\n", b.price);
	// 
	//struct Book* pb = &b;
	//printf("书名：%s\n", (*pb).name);
	//printf("书号：%s\n", (*pb).id);
	//printf("定价：%d\n", (*pb).price);
	// 
	// 结构体指针->成员名
	//printf("书名：%s\n", pb->name);
	//printf("书号：%s\n", pb->id);
	//printf("定价：%d\n", pb->price);
	//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//练习 - 接受一个整型值（无符号），按照顺序打印它的每一位
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d\t", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);
//	return 0;
//}

//练习 - 不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
// }
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "hello";
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//练习 - 计算 n 的阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

//练习 - 求第n个斐波那契数
//int Fib(int n)//递归可以解决，但效率很低
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n)//迭代
//{
//	int a = 1;//第一个数字
//	int b = 1;//第二个数字
//	int c = 0;//第三个数字
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//��ϰ - ����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
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
//	//�ݹ� - �����Լ������Լ�
//	print(num);
//	return 0;
//}

//��ϰ - ����������ʱ���������ַ����ĳ���
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
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}

//��ϰ - ���� n �Ľ׳�
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

//��ϰ - ���n��쳲�������
//int Fib(int n)//�ݹ���Խ������Ч�ʺܵ�
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
//int Fib(int n)//����
//{
//	int a = 1;//��һ������
//	int b = 1;//�ڶ�������
//	int c = 0;//����������
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
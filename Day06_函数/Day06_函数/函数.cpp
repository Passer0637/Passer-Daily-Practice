#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>//sqrt ���õ�ͷ�ļ�

//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//
//	return 0;
//}

//int main()
//{
//	char str[50];
//	strcpy(str, "This is string.h library function");
//	puts(str);
//	memset(str, '$', 7);
//	puts(str);
//
//	return(0);
//}

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;//����z - ���ؽϴ�ֵ
//}
//int main()
//{
//	int a = 5;
//	int b = 12;
//	int max = get_max(a, b);//�����ĵ���
//	printf("max = %d\n", max);
//
//	return 0;
//}

//������������Ϊ void ʱ����ʾ��������������κ�ֵ,Ҳ����Ҫ����
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap(int* pa, int* pb)
//{	//int* pa = &a;//pa����һ��ָ�����
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;//4���ֽڵĿռ�
//	int b = 30;
//	Swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//��ϰһ - �ж��Ƿ�������
//int is_prime(int n)
//{
//	//2->n-1 ֮�������
//	int j = 0;
//	for ( j = 2; j < sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 100; i <= 200; i++)
//	{
//		//�ж� i �Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//��ϰ�� - �ж��Ƿ�������
//int is_leap_year(int n)
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//Ϊ ��
//}
//int main()
//{
//		int y = 0;
//		int count = 0;
//		for ( y = 1000; y <= 2000; y++)
//		{
//			if (is_leap_year(y) == 1) 
//			{
//				count++;
//				printf("%d ", y);
//			}
//		}
//		printf("\ncount = %d\n", count);
//	return 0;
//}

//��ϰ�� - ʵ��һ��������������Ķ��ֲ���
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ����ͷ��� -1
//	//arr���Σ�ʵ�ʴ��ݵĲ������飬���ǵ�һ�����ֵĵ�ַ
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���\n");
//		printf("�±���: %d", ret);
//	}
//
//	return 0;
//}

//��ϰ�� - ÿ����һ������������ͻὫ num ��ֵ����1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

//������Ƕ��
//void new_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}

//int main()
//{
	//int len = strlen("abc");
	//printf("%d\n", len);
	////��ʽ����
	//printf("%d\n", strlen("abc"));
	//char arr1[20] = {0};
	//char arr2[] = "hello";
	//strcpy(arr1, arr2);
	//printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//���������Ͷ���
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int Add(int, int);//����������
//	Add(x, y);
//	return 0;
//}
//int Add(int x, int y)//�����Ķ���
//{
//	return x + y;
//}

//����������һ��д��ͷ�ļ���
//#include "�ӷ���������.h"
//#include "������������.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	int d = Sub(a, b);
//	printf("%d\n", c);
//	printf("%d\n", d);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>//sqrt 引用的头文件

//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
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
//	return z;//返回z - 返回较大值
//}
//int main()
//{
//	int a = 5;
//	int b = 12;
//	int max = get_max(a, b);//函数的调用
//	printf("max = %d\n", max);
//
//	return 0;
//}

//函数返回类型为 void 时，表示这个函数不返回任何值,也不需要返回
//void Swap(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}
//void Swap(int* pa, int* pb)
//{	//int* pa = &a;//pa就是一个指针变量
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 20;//4个字节的空间
//	int b = 30;
//	Swap(&a, &b);
//	printf("a = %d, b = %d\n", a, b);
//
//	return 0;
//}

//练习一 - 判断是否是素数
//int is_prime(int n)
//{
//	//2->n-1 之间的数字
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
//		//判断 i 是否为素数
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

//练习二 - 判断是否是闰年
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
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));//为 真
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

//练习三 - 实现一个整形有序数组的二分查找
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
//	//找到了就返回找到的位置的下标
//	//找不到就返回 -1
//	//arr传参，实际传递的不是数组，而是第一个数字的地址
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了\n");
//		printf("下标是: %d", ret);
//	}
//
//	return 0;
//}

//练习四 - 每调用一次这个函数，就会将 num 的值增加1
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

//函数的嵌套
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
	////链式访问
	//printf("%d\n", strlen("abc"));
	//char arr1[20] = {0};
	//char arr2[] = "hello";
	//strcpy(arr1, arr2);
	//printf("%s\n", strcpy(arr1, arr2));
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}

//函数声明和定义
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int Add(int, int);//函数的声明
//	Add(x, y);
//	return 0;
//}
//int Add(int x, int y)//函数的定义
//{
//	return x + y;
//}

//函数的声明一般写在头文件中
//#include "加法函数声明.h"
//#include "减法函数声明.h"
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
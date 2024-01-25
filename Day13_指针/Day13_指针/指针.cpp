#include <string.h>
#include <stdio.h>

//int main()
//{
	//int a = 3;//a占4个字节
	//int*  pa = &a;//拿到的是a的4个字节的第一个字节的地址
	//*pa = 20;//指针大小在32位平台上大小为4个字节；64位平台上大小为8个字节
	//int* pa;
	//char* pc;
	//float* pf;
	//printf("%d\n", sizeof pa);
	//printf("%d\n", sizeof pc);
	//printf("%d\n", sizeof pf);
	//指针类型的意义
	// 1 2 3 4 5 6 7 8 9 a b c d e f
	// 11111111
	//     8421
	//一个十六进制位等于四个二进制位
	//1.指针类型决定了：指针解引用的权限有多大
	//2..指针类型决定了指针走一步，能走多远（步长）
	//                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
	//int a = 0x11223344;
	//int* pa = &a;
	//char* pa = &a;
	//*pa = 0;
	//int arr[10] = { 0 };
	//char arr1[1] = { 0 };
	//int* p = arr;
	//char* pc = arr1;
	//printf("%p\n", p);
	//printf("%p\n", p + 1);
	//printf("%p\n", pc);
	//printf("%p\n", pc + 1);
	//int arr[10] = { 0 };
	//int* p = arr;
	////char* p = arr;
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*(p + 1);
	//}
	//return 0;

//int main()
//{
	//int* p;//p是一个局部变量，局部变量不初始化的话，默认是随机值
	//*p = 20;//非法访问内存；这里的p就是一个野指针
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*p = 1;
	//	p++;
	//}
	//当前不知道p应该初始化为什么地址的时候，默认初始化为NULL
	//int* p = NULL;
	//明确知道初始化的值
	//int a = 10;
	//int* pa = &a;
	//C语言本身不会检查数据的越界行为
	//int* p = NULL;
	//*p = 100;//无法访问
	//if (p != NULL )
	//{
	//	*p = 10;
	//}
	//else
	//{
	//	printf("该指针是一个空指针\n");
	//}
//	return 0;
//}

//int main()
//{
	//#define N_VALUES 5
	//float values[N_VALUES];
	//float* vp;
	////指针+-整数；指针的关系运算
	//for (vp = &values[0]; vp < &values[N_VALUES];)
	////                    指针的关系运算
	//{
	//	*vp++ = 0;
	//	//指针 + 整数
	//}
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* p = arr;
	//int* pend = arr + 9;
	//while (p <= pend)
	//	//指针的关系运算
	//{
	//	printf("%d\n", *p); 
	//	p++;
	//}
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////指针相减的前提
	////两个指针指向同一块空间
	//printf("%d\n", &arr[9] - &arr[0]);
	////指针 - 指针得到的是两个指针之间的元素个数
	//int len = strlen("abc");
	//printf("%d\n", len);
//	return 0;
//}

//int main()
//{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	// int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	//int* p = arr;//p存放的是数组首元素的地址
	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* p = arr; //指针存放数组首元素的地址
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
	//}
	//arr[2] <==> *(arr + 2) <==> *(p + 2) <==> (2 + arr) <==> 2[arr]
	// []  是一个操作符 2 和 arr是两个操作数
	//2[arr] 会自动转换为 *(2 + arr)
	//同理 p[2] --> *(p + 2) 
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa就是一个二级指针变量
//	int** ppa = &pa;//pa也是一个变量，&pa取出pa在内存中起始地址
//	return 0;
//}

//int main()
//{
//	//指针数组 - 数组
//	int arr[10];//整型数组 - 存放整形的数组就是整型数组
//	char ch[5];//字符数组 - 存放的是字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针的数组
//	char* parr[5];//字符指针的数组
//	return 0;
//}
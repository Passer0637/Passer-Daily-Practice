#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
	//int arr[8];
	//char ch[5];
	//int n = 8;
	//int arr[n];//Ӧ���볣�����ʽ;C99�﷨��֧��
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };//��ȫ��ʼ��
//	int arr1[5] = { 1, 2, 3, 4 };//����ȫ��ʼ��
//	int arr2[] = {1, 2, 3, 4, 5};// <==> int arr2[5] = { 1, 2, 3, 4, 5 };
//	char ch1[5] = { 'a', 'b', 'c'};
//	char ch2[] = { 'a', 'b', 'c'};
//	char ch3[5] = { 'ac'};// a c \0 \0 \0
//	char ch4[] = { 'ac'};// a c 
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//����ȫ��ʼ��
//	arr[4] = 5;//[] - �±����ò�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//%p - �ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i, &arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int* p = arr;//��������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
	//int arr[3][4];//��ά����
	//char ch[3][10];
	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };//��ʼ��
	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7 };//����ȫ��ʼ�� - ���油 0���ַ����鲹 \0
	//int arr[][4] = { {1, 2}, {3, 4}, {5, 6} };//�п���ʡ�ԣ��в�����ʡ��
	//int i = 0;
	//int j = 0;
	//int* p = &arr[0][0];
	//for ( i = 0; i < 12; i++)
	//{
	//	printf("%d ", *p); 
	//	p++;
	//}
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("&arr[%d][%d] = %p\n",i, j, &arr[i][j]);
	//	}
	//}
	//return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	//ȷ������
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i ; j++) 
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//�������� - ð������
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//	return 0;
//}
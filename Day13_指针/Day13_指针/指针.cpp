#include <string.h>
#include <stdio.h>

//int main()
//{
	//int a = 3;//aռ4���ֽ�
	//int*  pa = &a;//�õ�����a��4���ֽڵĵ�һ���ֽڵĵ�ַ
	//*pa = 20;//ָ���С��32λƽ̨�ϴ�СΪ4���ֽڣ�64λƽ̨�ϴ�СΪ8���ֽ�
	//int* pa;
	//char* pc;
	//float* pf;
	//printf("%d\n", sizeof pa);
	//printf("%d\n", sizeof pc);
	//printf("%d\n", sizeof pf);
	//ָ�����͵�����
	// 1 2 3 4 5 6 7 8 9 a b c d e f
	// 11111111
	//     8421
	//һ��ʮ������λ�����ĸ�������λ
	//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
	//2..ָ�����;�����ָ����һ�������߶�Զ��������
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
	//int* p;//p��һ���ֲ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
	//*p = 20;//�Ƿ������ڴ棻�����p����һ��Ұָ��
	//int arr[10] = { 0 };
	//int* p = arr;
	//int i = 0;
	//for ( i = 0; i < 10; i++)
	//{
	//	*p = 1;
	//	p++;
	//}
	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��Ĭ�ϳ�ʼ��ΪNULL
	//int* p = NULL;
	//��ȷ֪����ʼ����ֵ
	//int a = 10;
	//int* pa = &a;
	//C���Ա����������ݵ�Խ����Ϊ
	//int* p = NULL;
	//*p = 100;//�޷�����
	//if (p != NULL )
	//{
	//	*p = 10;
	//}
	//else
	//{
	//	printf("��ָ����һ����ָ��\n");
	//}
//	return 0;
//}

//int main()
//{
	//#define N_VALUES 5
	//float values[N_VALUES];
	//float* vp;
	////ָ��+-������ָ��Ĺ�ϵ����
	//for (vp = &values[0]; vp < &values[N_VALUES];)
	////                    ָ��Ĺ�ϵ����
	//{
	//	*vp++ = 0;
	//	//ָ�� + ����
	//}
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int* p = arr;
	//int* pend = arr + 9;
	//while (p <= pend)
	//	//ָ��Ĺ�ϵ����
	//{
	//	printf("%d\n", *p); 
	//	p++;
	//}
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	////ָ�������ǰ��
	////����ָ��ָ��ͬһ��ռ�
	//printf("%d\n", &arr[9] - &arr[0]);
	////ָ�� - ָ��õ���������ָ��֮���Ԫ�ظ���
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
	//int* p = arr;//p��ŵ���������Ԫ�صĵ�ַ
	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int* p = arr; //ָ����������Ԫ�صĵ�ַ
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//for (i = 0; i < sz; i++)
	//{
	//	printf("&arr[%d] = %p   <====> p+%d = %p\n", i, &arr[i], i, p + i);
	//}
	//arr[2] <==> *(arr + 2) <==> *(p + 2) <==> (2 + arr) <==> 2[arr]
	// []  ��һ�������� 2 �� arr������������
	//2[arr] ���Զ�ת��Ϊ *(2 + arr)
	//ͬ�� p[2] --> *(p + 2) 
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa����һ������ָ�����
//	int** ppa = &pa;//paҲ��һ��������&paȡ��pa���ڴ�����ʼ��ַ
//	return 0;
//}

//int main()
//{
//	//ָ������ - ����
//	int arr[10];//�������� - ������ε����������������
//	char ch[5];//�ַ����� - ��ŵ����ַ�
//	//ָ������ - ���ָ�������
//	int* parr[5];//����ָ�������
//	char* parr[5];//�ַ�ָ�������
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//ģ��ʵ�� strcpy
// �� stc ָ������ݿ����Ž� dest ָ��Ŀռ���
// �ӱ����Ͻ���ϣ�� dest ָ������ݱ��޸ģ�stc ָ������ݲ�Ӧ�ñ��޸�
//char* my_strcpy(char* dest, const char* stc)
//{
//	assert(stc != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *stc++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//1.Ŀ��ռ����ʼ��ַ 2.Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int  main()
//{
	//1.
	//int num = 10;
	//int* p = &num;
	//*p = 20;
	//printf("%d\n", num);
	//2.
	//const���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
	//const int num = 10;
	//num = 20;//err
	//const int* p = &num;
	//int n = 100;
	//const ����ָ�������ʱ��
	//const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
	//      ���ǣ�ָ����������ǿ����޸ĵ�
	//*p = 20;
	//p = &n;//�޸� p ����
	//3.
	//int num = 10;
	//int* const p = &num;
	//const ����ָ�������ʱ��
	//const �������*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
	//      ���ǣ�ָ��ָ������ݿ��Ա��ı�
//	*p = 20;//ok
//	p = &n;//err
//	printf("%d\n", num);
//	return 0;
//}

//strlen ���ַ�������
//my_strlen
//1.coonst
//2.assert
//size_t   -   unsigned int
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	size_t count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	printf("%d\n", my_strlen(arr));
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������
//�ֲ���������������Ǳ������ڵľֲ���Χ
//ȫ�ֱ���������������������
//int g_val = 2022;
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("���\n");
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

////��������
//extern int a;
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}

//�������������ڣ���������������֮���ʱ���
//�ֲ��������������ڣ�����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ��������������
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//����
//#define MAX 10000
//int main()
//{
//	//1.���泣��
//	// 3.14;
//	// 10;
//	// 'a';
//	// "abcdef";
//	
//	//2.const���εĳ�����
//	//const int num = 10;//num���ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
//	//num = 20;
//	//printf("num - %d", num);//20
//
//	//int arr[10] = {0};//10��Ԫ��
//	//const int n = 10;
//	//int arr2[n] = {0};//n�Ǳ��������ﲻ��
//
//	//3.define ����ı�ʶ������
//	//int n = MAX;
//	//printf("n = %d\n", n);
//
//	//4.ö�ٳ���
//	//����һһ�оٵĳ���
//	//�Ա�
//	enum Sex
//	{
//		//����ö�����͵ı�����δ������ȡֵ
//		MALE = 3,//����ֵ
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
//	// �ַ����� - ������һ����ͬ���͵�Ԫ��
//	// �ַ����ڽ�β��λ��������һ�� \0 ���ַ�
//	// \0 ���ַ����Ľ�����־
//
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//
//	//��һ���ַ�������
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));//��������ֵ
//
//	//int len = strlen("abc");//Ҫ����ͷ�ļ� #include <string.h>
//	//printf("%d\n", len);//3,������ \0 ����
//
//	//��ӡ�ַ���
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//}

//ת���ַ�
//int main()
//{
//	printf("F:\C++\Day02_��ʶ");
//	printf("ab\ncd");// ת�� ==> ����
//
//	return 0;
//}

//int main()
//{
//	//printf("(are you ok??)");//??) ==> ] - ����ĸ��
//	//��are you ok]
//	 
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("F:\\tC++\\tDay02_��ʶ");
//	//printf("\a\a\a\a\a\a");//����
//
//	//printf("%c\n", '\130');//8����130��ʮ���Ƶ�88
//	//X -- ASCII��ֵ��88
//	//printf("%c\n", '\101');//A - 65 ==> �˽���:101
//	//printf("%c\n", '\x30');
//
//	printf("%d\n", strlen("F:\te++\328\tay02"));//13���ַ�
//	return 0;
//}

//int main()
//{
//	int input = 0;
//
//	printf("���\n");
//	printf("��Ҫ�ú�ѧϰ��1/0��?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��");
//	else
//		printf("������");
//	
//	return 0;
//}

//C++ - 30000���� - ��һ������Ĺ���
//int main() 
//{
//	int line = 0;
//	//ѭ��
//	while (line < 30000)
//	{
//		printf("д����:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��");
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
//	//�����������
//	int sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//���� - һ����ͬ���͵�Ԫ�صļ���
//	//10������ 1-10 ������
//	//���������±������ʵ�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ��
//}

//int main()
//{
//	int a = 9 / 2;
//	float b = 9 / 2.0;
//	int c = 9 % 2;//ȡ��
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = a << 1;//���Ʋ����� - �ƶ����Ƕ�����λ 000000010 ==> 2 - 00000100 ==> 4
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
//	//��Ŀ��������ֻ��һ��������
//	int a = 0;
//	// 0 ��ʾ�٣��� 0 ������
//	printf("%d\n", !a);//1
//
//	if (a)
//	{
//		//��� a Ϊ�棬����
//	}
//	if (!a)
//	{
//		//��� a Ϊ�٣�����
//	}
//	a = -5;
//	a = +a;
//
//	return 0;
//}

//int main()
//{
////	//sizeof ��һ��������
////	//�������ͻ��߱�����С��
////	int a = 10;
////	printf("%d\n", sizeof(int));
////	printf("%d\n", sizeof a);
//	// 10 * 4 = 40
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0])); //4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz); //10
//	return 0;
//}
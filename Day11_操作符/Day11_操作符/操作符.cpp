#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int  main()
//{
	//����������
	//double a = 3 / 5;//0
	//double b = 6.0 / 5;
	//printf("%f\n", a);
	//printf("%f\n",b);
	//int c = 7 % 3;//1
	//printf("%d\n", c);
	//��λ������
	//int a = 2;
	//�� a ������λ�����ƶ�һλ���ұ߲� 0 
	//int b = a << 1;
	//int a = 10;
	//int b = a >> 1;
	//int a = -1;
	//int b = a >> 1;
	//��ǰ�����Ʋ�����ʹ�õ�����������
	//λ������
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
	//��ֵ������
	//int a = 10;
	//a = 100;
	//a += 100;
	//a >>= 3;
	//��Ŀ������ - ֻ��һ��������
	//int flag = 5;
	//if (flag)//flag Ϊ��
	//{
	//	printf("Hello");
	//}if (!flag)//flag Ϊ��
	//{
	//	printf("hello");
	//}
	//int a = 10;
	//int arr[10] = { 0 };
	//a = -a;
	//printf("%d\n", a);
	//printf("%p\n", &a);
	//printf("%d\n", sizeof (arr));
	//printf("%d\n", sizeof  arr);//sizeof ��һ�������������Ǻ���
	//short s = 5;
	//int a = 10;
	//printf("%d\n", sizeof(s = a + 2));//2
	//printf("%d\n", s);//5
	//int a = -1;//����ȡ��
	//int b = ~a;
	//printf("%d\n", b);
	//int a = 10;
	//int b = a++;//�ȼӺ���
	//printf("b = %d\n",b);
	//printf("a = %d\n", a);
	//int c = ++a;
	//printf("c = %d\n", c);
	//printf("a = %d\n", a);
	//int a = 10;
	//printf("a = %p\n", &a);
	//int* pa = &a;//pa��������ŵ�ַ�� - pa����һ��ָ�����
	//*pa = 20;// * ����Ϊ�����ò����� - ��ӷ��ʲ�����
	//printf("a = %d\n", a);
	//int a = (int)3.14;
	//printf("a = %d\n", a);
	//int arr[10] = { 0 };
	//char ch[10] = { 0 };
	//printf("%d\n", sizeof(arr));//40
	//printf("%d\n", sizeof(ch));//10
	//��ϵ������
	//int a = 3;
	//int b = 5;
	//if (a == b)//a >= b��a > b
	//{
	//	return 1;
	//}
	//if (a != b)//a <= b
	//{
	//	return 111;
	//}
	//�Ƚ������ַ�����Ȳ���ʹ�� == 
	//�߼�������
	//int a = 3;
	//int b = 0;
	//if (a && b)//��������ͬʱ����
	//{
	//	printf("���\n");
	//}
	//if (a || b)//��������ֻ��Ҫ����һ��
	//{
	//	printf("����˭\n");
	//}
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	////i = a++||++b||d++;
	//printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
	//��Ŀ������
	//int a = 5;
	//int b = 0;
	//b = (a > 5 ? 1 : -1);
	//printf("b = %d\n", b);
	//���ű��ʽ - �����������μ��㣬�����������ʽ�Ľ�������һ�����ʽ�Ľ��
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

//�ṹ��
//�飺��������ţ������磬���ߣ�����
//�ˣ����䣬�Ա�����
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};

//int main()
//{
	//int arr[10] = { 1, 2, 3, 4 ,5, 6, 7 ,8, 9 };
	//printf("%d\n", arr[4]);// [] - �±����ò����� ; �������������� arr��[]
	//
	//int ret = Add(3, 250);// ( ) - �������ò�����
	//printf("%d\n", ret);
	//
	//int num = 10;
	//  . ���������ṹ�������.��Ա��
	//struct Book b = { "C����", "C20210509", 55 };
	//printf("������%s\n", b.name);
	//printf("��ţ�%s\n", b.id);
	//printf("���ۣ�%d\n", b.price);
	// 
	//struct Book* pb = &b;
	//printf("������%s\n", (*pb).name);
	//printf("��ţ�%s\n", (*pb).id);
	//printf("���ۣ�%d\n", (*pb).price);
	// 
	// �ṹ��ָ��->��Ա��
	//printf("������%s\n", pb->name);
	//printf("��ţ�%s\n", pb->id);
	//printf("���ۣ�%d\n", pb->price);
	//
//	return 0;
//}
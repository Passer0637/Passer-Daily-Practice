#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//
//	int a = 10;
//    int b = a++;//����++����ʹ�ã���++
//    int b = a; 
//    a=a+1;
//
//    int b = ++a;//ǰ��++��ǰ++����ʹ��
//    a=a+1;
//    b=a;
//
//    int a = 10;
//    int b = a--;
//    b=a; 
//    a=a-1;
//    int b = --a;
//    a = a - 1; 
//    b = a;
//    printf("%d\n", b);// 8
//    printf("%d\n", a);// 8
//
//    int a = (int)3.14;
//    int a = int(3.14);//ǿ������ת��
//    printf("%d\n", a);
//
//    3.14 //���渡������������Ĭ�����Ϊdouble����
//
//    && �߼��� - ����
//    || �߼��� - ����
//
//    int a = 1;
//    int b = 1;
//    if (a && b)
//    {
//        printf("���߶�Ϊtrue\n");
//    }
//
//    int e = 55;
//    int f = 0;
//
//    if (e || f)
//    {
//        printf("��һ��Ϊtrue\n");
//    }
//
//    int c = 10;
//    int d = 20;
//    int r = c > d ? c : d;
//    printf("%d\n", r);
//
//    ���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//    ���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//    int a = 10;
//    int b = 20;
//    int c = 0;
//           c=8    a=28   5
//    int d = (c=a-2, a=b+c, c-3);
//    printf("%d\n", d);
//
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]�����±����ò�����  arr��3����[]�Ĳ�����
//
//    ���ú���ʱ����������ģ������Ǻ������ò�����
//    printf("���\n");
//    
//    return 0;
//}

////�ؼ��� - �����Լ������ģ��Լ����ܴ���
//int main()
//{
//	int a = 0;//�Զ��������Զ����ٵ� - �Զ�����
//	//auto �ؼ���
//
//	register int num = 100;//���� num ��ֵ����ڼĴ�����
//
//
//	return 0;
//}

//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 0;
//	u_int num2 = 1;
//
//	return 0;
//}

//static - ��̬��
//1.static - ���ξֲ�����
//2.static - ����ȫ�ֱ���
//3.static - ���κ���
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//����ȫ�ֱ���
//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//���κ���
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int z  = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//1.�����ʶ������
//#define Max 1000
//int main()
//{
//	printf("%d\n", Max);
//	return 0;
//}
//2.define �����
//#define ADD(X, Y) X+Y
//#define ADD1(A, B) ((A) + (B))
//ADD(X, Y) ==> �滻�� X + Y          
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	//             4 * 2 + 3     
//	printf("%d\n", 4 * ADD1(2, 3));
//	//             4 * (2 + 3) 
//	return 0;
//}

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	&a;//ȡ��ַ������
//	printf("%p\n", &a);//000000932512FCB4
//	int* p = &a;//p����ָ�����
//	 * ˵�� p ����ָ�����
//	 int ˵�� p ִ�еĶ����� int ����
//	char ch = 'w';
//	char * pc = &ch;
//	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int* p;
//	char* p2;
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ��32bitλ - 4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ��64bitλ - 8byte������ָ������Ĵ�С��8���ֽ�
//
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}

//����ѧ������
//struct Stu
//{
//	��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//�����鼮����
//struct Book
//{
//	char name[20]; 
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = {"����", 20, "��", "15596668862"};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ�����.��Ա����
//
//	struct Stu* ps = &s;
//	printf("2:%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//
//	printf("3:%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//�ṹ��ָ�� -> ������
//	return 0;
//}



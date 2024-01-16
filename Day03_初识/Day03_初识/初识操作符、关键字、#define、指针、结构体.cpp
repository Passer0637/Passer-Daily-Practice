#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//
//	int a = 10;
//    int b = a++;//后置++，先使用，后++
//    int b = a; 
//    a=a+1;
//
//    int b = ++a;//前置++，前++，后使用
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
//    int a = int(3.14);//强制类型转换
//    printf("%d\n", a);
//
//    3.14 //字面浮点数，编译器默认理解为double类型
//
//    && 逻辑与 - 并且
//    || 逻辑或 - 或者
//
//    int a = 1;
//    int b = 1;
//    if (a && b)
//    {
//        printf("两者都为true\n");
//    }
//
//    int e = 55;
//    int f = 0;
//
//    if (e || f)
//    {
//        printf("有一个为true\n");
//    }
//
//    int c = 10;
//    int d = 20;
//    int r = c > d ? c : d;
//    printf("%d\n", r);
//
//    逗号表达式就是逗号隔开的一串表达式
//    逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//    int a = 10;
//    int b = 20;
//    int c = 0;
//           c=8    a=28   5
//    int d = (c=a-2, a=b+c, c-3);
//    printf("%d\n", d);
//
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int n = 3;
//    arr[n] = 20;//[]就是下标引用操作符  arr和3就是[]的操作数
//
//    调用函数时，函数后面的（）就是函数调用操作符
//    printf("你好\n");
//    
//    return 0;
//}

////关键字 - 语言自己创建的，自己不能创建
//int main()
//{
//	int a = 0;//自动创建，自动销毁的 - 自动变量
//	//auto 关键字
//
//	register int num = 100;//建议 num 的值存放在寄存器中
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

//static - 静态的
//1.static - 修饰局部变量
//2.static - 修饰全局变量
//3.static - 修饰函数
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
//修饰全局变量
//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//修饰函数
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

//1.定义标识符常量
//#define Max 1000
//int main()
//{
//	printf("%d\n", Max);
//	return 0;
//}
//2.define 定义宏
//#define ADD(X, Y) X+Y
//#define ADD1(A, B) ((A) + (B))
//ADD(X, Y) ==> 替换成 X + Y          
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
//	int a = 10;//向内存申请4个字节，存储10
//	&a;//取地址操作符
//	printf("%p\n", &a);//000000932512FCB4
//	int* p = &a;//p就是指针变量
//	 * 说明 p 就是指针变量
//	 int 说明 p 执行的对象是 int 类型
//	char ch = 'w';
//	char * pc = &ch;
//	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int* p;
//	char* p2;
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要大多空间
//	//32位机器上的地址：32bit位 - 4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址：64bit位 - 8byte，所以指针变量的大小是8个字节
//
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//
//	return 0;
//}

//创建学生类型
//struct Stu
//{
//	成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//创建书籍类型
//struct Book
//{
//	char name[20]; 
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = {"张三", 20, "男", "15596668862"};//结构体的创建和初始化
//	printf("1:%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员变量
//
//	struct Stu* ps = &s;
//	printf("2:%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//
//	printf("3:%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);//结构体指针 -> 变量名
//	return 0;
//}



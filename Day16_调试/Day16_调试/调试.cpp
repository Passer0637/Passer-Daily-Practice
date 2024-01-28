#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现 strcpy
// 把 stc 指向的内容拷贝放进 dest 指向的空间中
// 从本质上讲，希望 dest 指向的内容被修改，stc 指向的内容不应该被修改
//char* my_strcpy(char* dest, const char* stc)
//{
//	assert(stc != NULL);//断言
//	assert(dest != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *stc++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	//1.目标空间的起始地址 2.源空间的起始地址
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
	//const修饰变量，这个变量就被称为常变量，不能被修改，但是本质上还是变量
	//const int num = 10;
	//num = 20;//err
	//const int* p = &num;
	//int n = 100;
	//const 修饰指针变量的时候
	//const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
	//      但是，指针变量本身是可以修改的
	//*p = 20;
	//p = &n;//修改 p 变量
	//3.
	//int num = 10;
	//int* const p = &num;
	//const 修饰指针变量的时候
	//const 如果放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
	//      但是，指针指向的内容可以被改变
//	*p = 20;//ok
//	p = &n;//err
//	printf("%d\n", num);
//	return 0;
//}

//strlen 求字符串长度
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
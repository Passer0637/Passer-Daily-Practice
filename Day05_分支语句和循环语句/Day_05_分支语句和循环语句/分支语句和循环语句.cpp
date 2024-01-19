#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>//strlen 引用头文件
#include <windows.h>//Sleep 引用头文件
#include <stdlib.h>//rand 引用头文件
#include <time.h>//time 引用头文件

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认密码（Y/N）：");
	//清理缓冲区
	//getchar();//处理 '\n'
	//清理缓冲区的中多个字符
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int  i = 0;//初始化
//	while (i <= 10)//判断部分
//	{
//		printf("%d", i);
//
//		i++;//调整部分
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d\t", i);
//	}
//	return 0;
//}

// 建议
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
	//判断部分省略 - 判断部分恒为真 - 死循环
	//for (;;) 
	//{
	//	printf("Hello\n");
	//}
	//int i = 0;
	//int j = 0;
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("Hello\n");
	//	}
	//}
//	return 0;
//}

//int main()
//{
	//先循环后判断
//	int i = 1;
//	do
//	{
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//练习一 - 计算 n 的阶乘
//int main()
//{
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		printf("%d", ret);
//
//	return 0;
//}

//练习二 - n 的阶乘累加和
//int main()
//{
//	int sum = 0;
//	int ret = 1;
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			sum = ret + sum;
//		}
//		printf("%d", sum);
//
//	return 0;
//}

//练习三 - 折半查找\二分查找
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 7;//要查找的数字
//	//在 arr 这个有序的数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
//	int left = 0;//左边下标
//	int right = sz - 1;//右边下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到的下标是·: %d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//练习四 - 演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "Welcome come to China!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//练习五 - 模拟用户登录情景，并且只能登录三次。
//只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串“123456”
//	char password[20] = {0};
//	for ( i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		//两个字符串比较，不能使用==，应该使用 strcmp - 对应字符比较，相等返回值为 0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误.请重新输入\n");
//		}
//		if (i == 3)
//		{
//			printf("三次密码均输入错误,退出程序\n");
//		}
//	}
//	return 0;
//}

//练习六 - 猜数字游戏

//1.自动产生一个 1-100 之间的随机数
//2.猜数字
//猜对了 - 恭喜你，游戏结束
//猜错了 - 告诉你猜大了还是猜小了，继续猜，知道猜对
//3.游戏一直运行，除非退出游戏
void menu()//打印菜单函数
{
	printf("*******************************\n");
	printf("*********  1. play  ***********\n");
	printf("*********  2. exit  ***********\n");
	printf("*******************************\n");
}
void game()//游戏函数
{
	//猜数字游戏的实现
	//1.生成随机数
	//rand 函数返回了一个 0-32767 之间的数
	//时间 - 时间戳
	int ret = rand() % 100  + 1;//%100 的余数是 0-99，然后 +1，范围就是 0-100
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		int guess = 0;
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
			game();
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}


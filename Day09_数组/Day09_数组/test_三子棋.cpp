#define _CRT_SECURE_NO_WARNINGS 1

#include "game_三子棋.h"

//菜单函数
void menu()
{
	printf("******************************\n");
	printf("*********  1. play  **********\n");
	printf("*********  0. exit  **********\n");
	printf("******************************\n");
}

//游戏函数
void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);

	//玩家走 - 电脑走
	char ret = 0;//接受游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢游戏
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢游戏
		char ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家胜利\n");
		printf("\n");
		DisplayBoard(board, ROW, COL);
	}
	else if (ret == '#')
	{
		printf("电脑胜利\n");
		printf("\n");
		DisplayBoard(board, ROW, COL);
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);

	return 0;
}
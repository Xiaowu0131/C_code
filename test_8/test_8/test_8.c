#define _CRT_SECURE_NO_WARNINGS 1

//三子棋
//test.c 测试游戏逻辑
//game.h 关于游戏相关的函数声明，符号声明，头文件的包含
//game.c 游戏相关函数的实现


#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("********* 1.play **********\n");
	printf("********* 0.exit **********\n");
	printf("***************************\n");
}

void  game()
{
	//存储数据 —— 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	Initboard(board, ROW, COL);

	//打印一下棋盘，本质是打印数组的内容
	Displayboard(board,ROW,COL);
	char ret = 0;//接收游戏状态
	//玩家走
	//电脑走
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否赢得游戏
		char ret = Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret = '*')
	{
		printf("玩家赢了\n");
	}
	else if(ret='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
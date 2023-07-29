#define _CRT_SECURE_NO_WARNINGS 1

//������
//test.c ������Ϸ�߼�
//game.h ������Ϸ��صĺ�������������������ͷ�ļ��İ���
//game.c ��Ϸ��غ�����ʵ��


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
	//�洢���� ���� ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	Initboard(board, ROW, COL);

	//��ӡһ�����̣������Ǵ�ӡ���������
	Displayboard(board,ROW,COL);
	char ret = 0;//������Ϸ״̬
	//�����
	//������
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		char ret = Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = Iswin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret = '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
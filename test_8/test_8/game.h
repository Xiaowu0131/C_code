#pragma once

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵĶ���
#define ROW 3
#define COL 3

//����������
//��ʼ������
void Initboard(char board[ROW][COL],int row,int col );

//��ӡ���̵ĺ���
void Displayboard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//
//1.���Ӯ��  -*
//2.����Ӯ��  -#
//3.ƽ��      -Q
//4.��Ϸ����  -c

//�ж���Ϸ�Ƿ�����Ӯ
char Iswin(char board[ROW][COL], int row,int col);
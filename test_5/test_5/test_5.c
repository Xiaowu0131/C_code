#define _CRT_SECURE_NO_WARNINGS 1
//��ϰһ��д���뽫���������Ӵ�С���

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);//������
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}//����˳��
//	printf("%d %d %d\n", a, b, c);//��� ��--С
//	return 0;
//}


//��ϰ������ӡ1-100֮������3�ı���

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)  //����1-100��
//	{
//		if (i % 3 == 0)
//		{
//			printf(" % d", i);
//		}
//	}
//
//	return 0;
//}


//��ϰ�������������������Լ��


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);
//	int max = 0;
//	//����n��m��С��Ϊ���Լ��
//	if (n > m)
//		max = m;
//	else
//		max = n;
//	while (1)//�жϽ�С���Ƿ�Ϊ���Լ��
//	{
//		if (m % max == 0 && n % max == 0);
//		{
//			printf("���Լ��Ϊ��%d\n", max);
//			break;
//		}
//		max--; //������ǣ���max--���μ�һѭ���ж�
//	}
//	return 0;
//}


//��ϰ�ģ���ӡ1000�굽2000��֮�������

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//		//�ж�y�Ƿ�Ϊ����
//		//1.�ܱ�4�������ܱ�100����
//		//2.�ܱ�400����
//	{
//		if (y % 4 == 0)
//		{
//			if(y%100!=0)
//			{
//				printf("%d ", y);
//			}
//			if (y % 400 == 0)
//			{
//				printf("%d ", y);
//			}
//		
//		}
//	}
//	return 0;
//}


//��ϰ�壺��ӡ100-200֮�������

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//����==����
//		//ֻ�ܱ�1������������
//		//��2---��i-1��֮������ֿ��ܷ�����
//		int j = 0;
//		for (j = 2; j <= (i - 1); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		//
//
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//go to ���

//�ػ�����
//ֻҪ����������һ�����ڵ��Ծͻ��Զ��ػ�����������롰��������ȡ���ػ���
//
//Windows  cmd������ʾ������  shutdown -s -t 60   ��-s�����ùػ���-t����ʱ��ػ���60ָ60��֮��ػ���
//shutdown -a ȡ���ػ�
//

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//�ػ���c�����ṩ��һ��������system����-ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");                                               //systemͷ�ļ�stdlib.h
//again:	
//	printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf_s("%s", input);
//	if (strcmp(input,"������")==0)//�����ַ���������==�Ƚϣ�Ӧ��ʹ��strcmp����string compare  //ͷ�ļ�string.h
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//Ҳ���Բ���goto���
#include <stdlib.h>
#include <string.h>
int main()
{
	//�ػ���c�����ṩ��һ��������system����-ִ��ϵͳ�����
	char input[20] = { 0 };
	system("shutdown -s -t 60");                                               //systemͷ�ļ�stdlib.h
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������")==0)//�����ַ���������==�Ƚϣ�Ӧ��ʹ��strcmp����string compare  //ͷ�ļ�string.h
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
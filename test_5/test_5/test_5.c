#define _CRT_SECURE_NO_WARNINGS 1
//练习一：写代码将三个整数从大到小输出

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a, &b, &c);//输入数
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
//	}//调整顺序
//	printf("%d %d %d\n", a, b, c);//输出 大--小
//	return 0;
//}


//练习二：打印1-100之间所有3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)  //产生1-100数
//	{
//		if (i % 3 == 0)
//		{
//			printf(" % d", i);
//		}
//	}
//
//	return 0;
//}


//练习三：给定两个数求最大公约数


//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf_s("%d%d", &n, &m);
//	int max = 0;
//	//假设n，m较小者为最大公约数
//	if (n > m)
//		max = m;
//	else
//		max = n;
//	while (1)//判断较小者是否为最大公约数
//	{
//		if (m % max == 0 && n % max == 0);
//		{
//			printf("最大公约数为：%d\n", max);
//			break;
//		}
//		max--; //如果不是，则max--依次减一循环判断
//	}
//	return 0;
//}


//练习四：打印1000年到2000年之间的闰年

//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//		//判断y是否为闰年
//		//1.能被4整除不能被100整除
//		//2.能被400整除
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


//练习五：打印100-200之间的素数

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数==质数
//		//只能被1和它本身整除
//		//用2---（i-1）之间的数字看能否整除
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


//go to 语句

//关机程序
//只要运行起来，一分钟内电脑就会自动关机，，如果输入“我是猪”就取消关机。
//
//Windows  cmd命令提示符窗口  shutdown -s -t 60   （-s是设置关机，-t设置时间关机，60指60秒之后关机）
//shutdown -a 取消关机
//

//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	//关机，c语言提供了一个函数：system（）-执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");                                               //system头文件stdlib.h
//again:	
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf_s("%s", input);
//	if (strcmp(input,"我是猪")==0)//两个字符串不能用==比较，应该使用strcmp（）string compare  //头文件string.h
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


//也可以不用goto语句
#include <stdlib.h>
#include <string.h>
int main()
{
	//关机，c语言提供了一个函数：system（）-执行系统命令的
	char input[20] = { 0 };
	system("shutdown -s -t 60");                                               //system头文件stdlib.h
	while (1)
	{
		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪")==0)//两个字符串不能用==比较，应该使用strcmp（）string compare  //头文件string.h
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}
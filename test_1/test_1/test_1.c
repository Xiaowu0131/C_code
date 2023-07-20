#include<stdio.h>
/*
int main()
{
	int age = 20;
	if (age >= 18)
		printf("成年\n");
	else
		printf("未成年\n");//if和else后面只能控制一条语句，如果要控制两条语句需要带上大括号。
                           //else{printf(1) printf(2)}才能达到想要的结果。                             
	printf("不能谈恋爱\n");
	//if (age >= 18)
	//	printf("成年\n");
	return 0;
}
*/


/*
int main()
{
	int age = 160;
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 && age < 26)//注意逻辑表达式的正确使用&&
		printf("青年\n");
	else if (age >= 26 && age < 40)
		printf("中年\n");//注意每个语句结束后的 英文 分号！！！！！！
	else if (age >= 40 && age < 60)
		printf("壮年\n");
	else if (age >= 60 && age <= 100)
		printf("老年\n");
	else
		printf("老不死\n");
		
	return 0;//return 0 后的英文分号一定不要忘记！！！！！
}
*/


/*
//include<stdio.h>
int main()
{
  int a=0;
  int b=1;
  if (a == 1)      //==为判断符号 =为赋值一定不可以混淆！！！
     if (b == 2)
       printf("hehe\n");
     else                //else就近原则，和离他最近的if匹配！！！
       printf("haha\n");
  return 0;
}
//这段代码运行结果为不打印，由上到下在第一个if时a不匹配则下面语句压根就不进行运行
//代码风格很重要，明确匹配方式，易于阅读
*/

//练习1判断一个数是否为奇数
/*
int main()
{
	int num = 14;
	if (num % 2 == 1)
		printf("奇数\n");
	else
		printf("非奇数\n");

	return 0;
}
*/
//练习2输出1-100之间的奇数
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}

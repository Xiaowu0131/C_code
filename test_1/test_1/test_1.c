#include<stdio.h>
/*
int main()
{
	int age = 20;
	if (age >= 18)
		printf("����\n");
	else
		printf("δ����\n");//if��else����ֻ�ܿ���һ����䣬���Ҫ�������������Ҫ���ϴ����š�
                           //else{printf(1) printf(2)}���ܴﵽ��Ҫ�Ľ����                             
	printf("����̸����\n");
	//if (age >= 18)
	//	printf("����\n");
	return 0;
}
*/


/*
int main()
{
	int age = 160;
	if (age < 18)
		printf("����\n");
	else if (age >= 18 && age < 26)//ע���߼����ʽ����ȷʹ��&&
		printf("����\n");
	else if (age >= 26 && age < 40)
		printf("����\n");//ע��ÿ����������� Ӣ�� �ֺţ�����������
	else if (age >= 40 && age < 60)
		printf("׳��\n");
	else if (age >= 60 && age <= 100)
		printf("����\n");
	else
		printf("�ϲ���\n");
		
	return 0;//return 0 ���Ӣ�ķֺ�һ����Ҫ���ǣ���������
}
*/


/*
//include<stdio.h>
int main()
{
  int a=0;
  int b=1;
  if (a == 1)      //==Ϊ�жϷ��� =Ϊ��ֵһ�������Ի���������
     if (b == 2)
       printf("hehe\n");
     else                //else�ͽ�ԭ�򣬺����������ifƥ�䣡����
       printf("haha\n");
  return 0;
}
//��δ������н��Ϊ����ӡ�����ϵ����ڵ�һ��ifʱa��ƥ�����������ѹ���Ͳ���������
//���������Ҫ����ȷƥ�䷽ʽ�������Ķ�
*/

//��ϰ1�ж�һ�����Ƿ�Ϊ����
/*
int main()
{
	int num = 14;
	if (num % 2 == 1)
		printf("����\n");
	else
		printf("������\n");

	return 0;
}
*/
//��ϰ2���1-100֮�������
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

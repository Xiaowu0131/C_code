#include <stdio.h>


//for循环
// 
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//	/*	if (i == 5)
//			break;*/ //break跳出循环
//		if (i == 5)
//			continue;//跳过5，不出现死循环continue跳出此次循环continue后面的语句
//		printf("%d", i);
//	}
//		return 0;
//}
////一些建议：1.不可在for循环体内修改循环变量，防止for循环失去控制 2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法


////for循环的一些变种
////变种1
//int main()
//{
//	int i = 0;
//	for (; ;)//初始化，判断，调整均可以省略，  判断省略--恒为真，死循环  ，一般不建议省略。
//	{
//		printf("%d", i);
//	}
//	return 0;
//}

//变种2
//int main()
//{
//	int x,y;
//	for (x=0,y=0;x<2&&y<5 ;++x,y++)//可用于2个变量
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//此循环0次，注意判断语句是把0赋值给k，0在c语言中为假，故判断为假跳出循环。
//		k++;
//	return 0;
//}
//



//do...while循环

//do语句特点：至少循环体一次，使用场景有限，故很少使用

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
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
//			break;//break跳出循环 continue跳过continue后面的代码重新进入循环
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

/*练习
1.计算n的阶乘
2.计算1!+2!+3!+4!+5!+6!+7!+8!+9!+10!
3.在一个有序数组中查找具体的数字n。编写int binsearch（int x,int v[],int n);功能：在v[0]<=v[1]<=v[2]...<=v[n-1]的数组中查找x
4.编写代码，演示多个字符从两端移动，向中间汇聚
5.编写代码实现模拟用户登录场景，并且只能登录3次。（只允许输入3次密码，如果密码输入正确则提示登陆成功，如果3次输入均错误则退出程序）
*/

////第一题
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int i = 1;
//	scanf_s("%d", & n);
//	while (i<=n)
//	{
//		m = i * (i + 1);
//		i = i++;
//	}
//	printf("%d\n", m);
//	return 0;
//}
////错误，阶乘表达式错误,赋值错误。此处输入n，m为所得阶乘，i做辅助；i应赋值0，m赋值1，阶乘表达式要用到前一项所得m，
////如果m赋值0那么结果都为0，阶乘表达式应该为m=m*（i+1）

////第二题
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int num = 0;
//	for (n=1;n <= 3;n++)
//	{
//		for (i = 1,ret=1; i <= n; i++)//计算n的阶乘之前，要先把ret初始为1
//		{
//			ret *= i;
//		}
//		num += ret;
//	}
//	printf("%d\n", num);
//
//	return 0;
//}

//第三题

//对于有序数组如果从前往后查找可以，但是效率太低，可以用二分法查找提高效率

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;//要查找的数字
//		//在arr数组中查找k（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算整个数组大小/计算一个元素大小=数组的元素个数
//
//	int left = 0;//数组第一个数下标
//	int right = sz - 1;//数组最后一个数下标
//
//	while(left<=right)//左边小于等于右边，则中间还有数字需要被查找即为需要二分查找循环的条件
//	{
//		int mid = (left + right) / 2; //二分法元素下标平均值
//		if (arr[mid] < k)//如果mid对应数组中的元素比要找的数k要小,则从左往右找
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("找不到\n");
//	}//大括号内是一次二分查找的内容
//	return 0;
//
//}

//第四题
//题意
//  
//welcome to bite!
//################ //(要有一个同长度完全覆盖的用于代码编写)
// 
//w##############!
//we############e!
//wel##########te!
//......
//welcome to bite！


//#include <string.h>   //strlen引用头文件
//int main()
//{
//	char arr1[] = "welcome to bite!";
//	char arr2[] = "################";
//	int left = 0;
//	int right = strlen(arr1)- 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}


//第五题
#include <string.h>
int main()
{
	int i = 0;
	//假设正确的密码是“123456”

	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		//if (password == "123456")//-err-两个字符串比较，不能用==，应该使用字符串比较函数strcmp
		if (strcmp(password,"123456")==0)//==0表示两个字符串相等，输对了
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入！\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");

	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1

//函数



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "abc";
//
//	strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}

//写一个函数找出两个整数之间的较大值
#include <stdio.h>

////函数的自定义
////int表示函数最后返回整型  函数名   （函数的参数）
////即int 类型要与返回值z的类型要在一致
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//返回值z--返回较大值  
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的调用
//	int max=get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//写一个函数，交换两个值

//发现此处只是交换两个数，不需要返回值
//返回类型处写void，表示不返回任何值，也不需要返回值
//void Swap(int x, int y)
//{
//	int z = 0;
//	x = z;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}

//运行后发现此代码达不到想要的结果，故代码错误
//调用函数的值和函数原有的值没有任何关系，属于独立空间，因此要运用指针的知识

//int main()
//{
//	int a = 10;//开辟了一个4字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;//指针变量pa的值就是20
//
//	printf("%d\n", a);
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后a=%d b=%d\n", a, b);
//
//	return 0;
//}
////引用指针把引用函数和定义函数用地址联系起来
////上面一题只需要求a和b的较大值打印出来，不需要改变a和b的值，而本题要求交换即a和b的值发生了改变。


//函数的调用

//练习一：写一个函数判断一个数是否为素数

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//	
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//练习二：写一个函数判是不是闰年

//一个函数如果不写返回类型默认返回 int 类型 
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)    //有点繁琐，可以  if ((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)) 
//	{                         //               {
//		return 1;             //                return 1;
//	}                         //                } 
//	return 0;                 //                else return 0;
//
//}
//
//int main()
//{
//	int y = 0;
//	printf("请输入年份：");
//	scanf("%d", &y);
//	if (is_leap_year(y) == 1)
//	{
//		printf("%d是闰年 ", y);
//	}
//	else printf("%d不是闰年 ",y);
//	return 0;
//}


//练习三：写一个函数实现一个整形有序数组的二分查找

//int binary_search(int arr[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到的位置的下标
//	//找不到返回-1（下标不可能为-1）
//	int ret=binary_search(arr,key,sz);
//
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}


//练习四：写一个函数，每调用一次这个函数，就会将num的值加1；

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//
//	Add(&num);
//	printf("%d\n", num);
//
//	
//	return 0;
//}


////函数的嵌套调用和链式访问
//
////函数不可以嵌套定义，但是可以嵌套调用
////链式访问：把一个函数的返回值作为另外一个函数的参数
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下  告诉编译器有一个函数叫什么，参数是什么，返回类型是什么
//	int Add(int, int);
//
//	int  c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////函数的定义  （函数的定义如果放主函数下面，运行时会警告，所以在主函数里需要进行声明）
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////函数的声明应该放在函数的使用之前，先声明后使用，如果定义在前面则不用申明


//函数的递归

//int main()
//{
//	printf("hehe\n");
//	main();  //函数自己调用自己就叫做递归
//
//	return 0;
//}

//练习一：接受一个整形值（无符号），按照顺序打印它的每一位。例如：输入1234，输出：1 2 3 4 

// 1234%10       =4
// 1234/10=123%10=3
// 123/10 =12%10 =2
// 12/10  =1%10  =1
// 1/10   =0                   // 递归怎么做？？

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}


//练习二：编写函数不允许创建零食变量，求字符串长度
#include <string.h>

//int main()
//{
//	char arr[] = "bit";
//	//['a']['b']['c']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", strlen(arr));
//	 return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;//不符合题目要求，不允许创建临时变量
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	//['a']['b']['c']['\0']
//	//
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//my_strlen("bit");
//1 + my_strlen("it");
//1 + 1 my_strlen("t");
//1 + 1 + 1 my_strlen("");
//1+1+1+0=3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}

//递归和迭代
//练习三：求n的阶乘（不考虑溢出）

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}

//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	
//	int ret =Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}


//练习四：求第n个斐波那契数。（不考虑溢出）
      
        //n<=2    1
//Fib(n)//
        //n>2     Fib(n-1)+Fib(n-2)


//int Fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1)+Fib(n - 2);
//}
//效率太低
//int  Fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 0;
//    while (n>2)
//    {
//        c = a +b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//
//    printf("%d\n", ret);
//    return 0;
//}

//递归经典问题 汉诺塔问题 青蛙跳台阶问题



//编写程序，数一下1-100的所有整数中出现多少个数字9
// 9,19,29,39,...99
// 90,91,92...99
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 10 == 9)
//            count++;
//        if (i / 10 == 9)
//            count++;
//    }
//    printf("%d\n", count);
//    return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值，打印出来。
//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 0)
//            sum -= 1.0 / i;
//        else
//            sum += 1.0 / i;
//    }
//    printf("%lf\n", sum);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    double sum = 0.0;
//    int flag = 1;
//    for (i = 1; i <= 100; i++)
//    {
//            sum += flag*1.0 / i;
//            flag = -flag;
//    }
//    printf("%lf\n", sum);
//    return 0;
//}


//求十个整数中最大值
//int main()
//{
//    int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//    int max = arr[0];
//    int i = 1;
//    for (i = 0; i < 10; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    printf("%d\n", max);
//    return 0;
//}


//在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6
//...
//
//int main()
//{
//    int i = 1;
//    //打印行数
//    for (i = 1; i <= 9; i++)
//    {
//        //打印一行
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}


////编写一个函数reverse_string（char*string） 递归实现
////将参数字符串中的字符反向排列（不是逆序排列）
//my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//void reverse_string(char* str)
//{
//    int left = 0;
//    int right = my_strlen(str) - 1;
//
//    while (left<right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//   }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse_string(arr);//数组名arr是数组arr首元素的地址
//
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//

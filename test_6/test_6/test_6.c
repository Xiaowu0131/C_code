#define _CRT_SECURE_NO_WARNINGS 1

//����



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

//дһ�������ҳ���������֮��Ľϴ�ֵ
#include <stdio.h>

////�������Զ���
////int��ʾ������󷵻�����  ������   �������Ĳ�����
////��int ����Ҫ�뷵��ֵz������Ҫ��һ��
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;//����ֵz--���ؽϴ�ֵ  
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max=get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}


//дһ����������������ֵ

//���ִ˴�ֻ�ǽ���������������Ҫ����ֵ
//�������ʹ�дvoid����ʾ�������κ�ֵ��Ҳ����Ҫ����ֵ
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
//	printf("����ǰa=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//���к��ִ˴���ﲻ����Ҫ�Ľ�����ʴ������
//���ú�����ֵ�ͺ���ԭ�е�ֵû���κι�ϵ�����ڶ����ռ䣬���Ҫ����ָ���֪ʶ

//int main()
//{
//	int a = 10;//������һ��4�ֽڵĿռ�
//
//	int* pa = &a;//pa����һ��ָ�����
//	*pa = 20;//ָ�����pa��ֵ����20
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
//	printf("����ǰa=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}
////����ָ������ú����Ͷ��庯���õ�ַ��ϵ����
////����һ��ֻ��Ҫ��a��b�Ľϴ�ֵ��ӡ����������Ҫ�ı�a��b��ֵ��������Ҫ�󽻻���a��b��ֵ�����˸ı䡣


//�����ĵ���

//��ϰһ��дһ�������ж�һ�����Ƿ�Ϊ����

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
//		//�ж�i�Ƿ�Ϊ����
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



//��ϰ����дһ���������ǲ�������

//һ�����������д��������Ĭ�Ϸ��� int ���� 
//int is_leap_year(int y)
//{
//	if (y % 4 == 0 && y % 100 != 0)
//	{
//		return 1;
//	}
//	else if (y % 400 == 0)    //�е㷱��������  if ((y % 4 == 0 && y % 100 != 0)||(y % 400 == 0)) 
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
//	printf("��������ݣ�");
//	scanf("%d", &y);
//	if (is_leap_year(y) == 1)
//	{
//		printf("%d������ ", y);
//	}
//	else printf("%d�������� ",y);
//	return 0;
//}


//��ϰ����дһ������ʵ��һ��������������Ķ��ֲ���

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
//	return -1;//�Ҳ�����
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ�������-1���±겻����Ϊ-1��
//	int ret=binary_search(arr,key,sz);
//
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//��ϰ�ģ�дһ��������ÿ����һ������������ͻὫnum��ֵ��1��

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


////������Ƕ�׵��ú���ʽ����
//
////����������Ƕ�׶��壬���ǿ���Ƕ�׵���
////��ʽ���ʣ���һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��  ���߱�������һ��������ʲô��������ʲô������������ʲô
//	int Add(int, int);
//
//	int  c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//
////�����Ķ���  �������Ķ�����������������棬����ʱ�ᾯ�棬����������������Ҫ����������
//int Add(int x, int y)
//{
//	return x + y;
//}
//
////����������Ӧ�÷��ں�����ʹ��֮ǰ����������ʹ�ã����������ǰ����������


//�����ĵݹ�

//int main()
//{
//	printf("hehe\n");
//	main();  //�����Լ������Լ��ͽ����ݹ�
//
//	return 0;
//}

//��ϰһ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234�������1 2 3 4 

// 1234%10       =4
// 1234/10=123%10=3
// 123/10 =12%10 =2
// 12/10  =1%10  =1
// 1/10   =0                   // �ݹ���ô������

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
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}


//��ϰ������д��������������ʳ���������ַ�������
#include <string.h>

//int main()
//{
//	char arr[] = "bit";
//	//['a']['b']['c']['\0']
//	//
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", strlen(arr));
//	 return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;//��������ĿҪ�󣬲���������ʱ����
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
//	//ģ��ʵ��һ��strlen����
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

//�ݹ�͵���
//��ϰ������n�Ľ׳ˣ������������

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//����
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


//��ϰ�ģ����n��쳲����������������������
      
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
//Ч��̫��
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

//�ݹ龭������ ��ŵ������ ������̨������



//��д������һ��1-100�����������г��ֶ��ٸ�����9
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


//����1/1-1/2+1/3-1/4+1/5...+1/99-1/100��ֵ����ӡ������
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


//��ʮ�����������ֵ
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


//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6
//...
//
//int main()
//{
//    int i = 1;
//    //��ӡ����
//    for (i = 1; i <= 9; i++)
//    {
//        //��ӡһ��
//        int j = 0;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%2d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}


////��дһ������reverse_string��char*string�� �ݹ�ʵ��
////�������ַ����е��ַ��������У������������У�
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
//    reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//
//    printf("%s\n", arr);//fedcba
//    return 0;
//}

//

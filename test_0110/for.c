#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 1;
//	int j = 1;
//	int s = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		j = 
//			for (j = 1; j <= 10; j++)
//			{
//
//			}
//		s = s+j
//	}
//	return 0;
//}

//n的阶乘
//int main()
//{
//	int s = 1;
//	int n = 1;
//	int i = 1;
//	printf("请确认n的值:");
//	scanf("%d", &i);
//	i = i + 1;
//	for (n = 1;n<i; n++)
//	{
//		s = s * n;	
//	}
//	printf("%d", s);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 4; j++)//没有j=0,下次i++进来后变为了j=10.
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) 
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (; ; )//for循环的初始化、调整、判断都可以省略。如果判断被省略，则判断条件恒为真。
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//i=0,i<10。建议采用前闭后开区间写法。
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}
//进入死循环，不能在 for循环内修改循环变量，防止for循环失去控制。

//int main()
//{
//	int i = 0;
//	for (i = 1 ;i <= 10 ; i++)
//	{
//		//if(5==i)
//		//break;
//		//continue;
//		printf("%d ", i);
//	}
//	return 0;
//}
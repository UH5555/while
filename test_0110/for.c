#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//寻找数组中的某一个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("founded, No.%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("Not found");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到");
//	return 0;
//}

//10的阶乘一直加到1的阶乘-----我写的
//int main()
//{
//	int i = 1;
//	int j = 1;
//	int s = 0;
//	int n = 10;
//	int m = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		int m = 1;
//			for (j = 1; j <= n; j++)
//			{
//				m = m * j;
//			}
//			n--;
//			s = s + m;
//	}
//	printf("%d", s);
//	return 0;
//}

//10的阶乘一直加到1的阶乘-----老师写的(再优化）
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//10的阶乘一直加到1的阶乘-----老师写的
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//n的阶乘----老师写的
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

//n的阶乘---自己写的
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
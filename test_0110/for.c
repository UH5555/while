#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Ѱ�������е�ĳһ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±���:%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���");
//	return 0;
//}

//10�Ľ׳�һֱ�ӵ�1�Ľ׳�-----��д��
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

//10�Ľ׳�һֱ�ӵ�1�Ľ׳�-----��ʦд��(���Ż���
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

//10�Ľ׳�һֱ�ӵ�1�Ľ׳�-----��ʦд��
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

//n�Ľ׳�----��ʦд��
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

//n�Ľ׳�---�Լ�д��
//int main()
//{
//	int s = 1;
//	int n = 1;
//	int i = 1;
//	printf("��ȷ��n��ֵ:");
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
//		for (; j < 4; j++)//û��j=0,�´�i++�������Ϊ��j=10.
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
//	for (; ; )//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԡ�����жϱ�ʡ�ԣ����ж�������Ϊ�档
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)//i=0,i<10���������ǰ�պ�����д����
//	{
//		if (i = 5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}
//������ѭ���������� forѭ�����޸�ѭ����������ֹforѭ��ʧȥ���ơ�

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
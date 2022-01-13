#define _CRT_SECURE_NO_WARNINGS

#include <string.h>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (3 == i)
		printf("三次密码错误，账号已被锁定\n");
	return 0;
}

//int main()
//{
//	char arr1[] = "welcome to here!!!!";
//	char arr2[] = "                   ";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的一个函数-cls-----清除屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//大写字符与小写字符互转
//int main()
//{
//	char ch = 0;
//	int i = 0;
//	int n = 0;
//	scanf("%s", ch);
//	while ((ch = getchar() != EOF))
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			i = ch + 32;
//			putchar(i);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			n = ch - 32;
//			putchar(n);
//		}
//		else
//			printf("输入错误");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");//输入密码并存入password
//	scanf("%s", password);
//	//缓存区还剩余一个‘\n’
//	//getchar();---案1；
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("请确认（Y/N)：");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	//EOF---end of file
//	{
//		putchar (ch);
//	}
//	return 0;
//}

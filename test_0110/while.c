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
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (3 == i)
		printf("������������˺��ѱ�����\n");
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
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ�����һ������-cls-----�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//��д�ַ���Сд�ַ���ת
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
//			printf("�������");
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
//	printf("���������룺");//�������벢����password
//	scanf("%s", password);
//	//��������ʣ��һ����\n��
//	//getchar();---��1��
//	while ((ch = getchar() != '\n'))
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N)��");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���ֲ��Ҹ�ϰ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (right >= left)
//	{
//
//		int mid = left + (right - left) / 2;
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
//			printf("�ҵ��ˣ��±���:>%d",mid);
//			break;
//		}
//
//	}
//	if (right < left)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("��������Ϸ\n");
//	printf("**************\n");
//	printf("*** 1.play****\n");
//	printf("*** 0.exit****\n");
//	printf("**************\n");
//}
//
//void game()
//{
//
//	//time��������ʱ���
//	int ret=rand()%100+1;
//	int guess = 0;
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��1/0��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break; 
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//int main()
//{
//flag:
//	printf("hehe");
//	printf("hehe");
//	printf("hehe");
//	printf("hehe");
//	goto flag;//gotoֻ���ڱ�������Ӧ��
//
//	return 0;
//}
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//again:
//
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", &input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = "";
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", &input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//int Add(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s",arr);
//
//	return 0;
//}

//get_max(int x, int y)
//{
//	int z = (x > y) ? x : y;
//	return z;
//}
//void Swap(int *px, int *py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
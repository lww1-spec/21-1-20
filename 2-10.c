#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//��ϰ�����֣��Լ�д��
//void menu()
//{
//	printf("*****************\n");
//	printf("*****1.play******\n");
//	printf("****2.exit******\n");
//	printf("*****************\n");
//
//}
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("������֣���");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else
//		{
//			printf("�¶���");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf("%d", &input);
//
//		if (1 == input)
//		{
//			printf("��ʼ��Ϸ");
//			game();
//		
//		}
//		else if (2 == input)
//		{
//			printf("������Ϸ");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
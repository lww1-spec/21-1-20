#define _CRT_SECURE_NO_WARNINGS 1
#include<limits.h>
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���������룺�������Ͳ���ػ�����Ȼһ����֮��͹�����\n");
//	scanf("%s", input);
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

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int i = 0;
//	int ret = (2, 3);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d,", i);
//	}
//
//	return 0;
//}



//���󷽷�
//int main()
//{
//	int sum = 0;
//	int day = 0;
//	for (sum = 0; 1; sum++)
//	{
//		for (day = 0;1; day++)
//		{
//			if (sum == 4 * day + 48 && sum == 6 * day - 8)
//				printf("�ƻ���%d�죬����%d��",day,sum);
//		}
//	}
//
//	return 0;
//}

void math(int a1, int b1, int c1, int a2, int b2, int c2)
{
	//����ʽ����Ԫһ�η�����
	//a1 b1 c1
	//a2 b2 c2
	int x, y;
	x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
	y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	printf("׼����%d����׼����%d��\n", x, y);

}
int main()
{
	int a1, b1, c1, a2, b2, c2;
	printf("�������Ԫһ�η��̵�����������");
	scanf("%d%d%d%d%d%d", &a1, &b1, &c1, &a2, &b2, &c2);
	math(a1, b1, c1, a2, b2, c2);




	//����
	//static int sum = 0;
	//int day = 0;
	//for (day = 0; sum != 4 * day + 48 && sum != 6 * day - 8; day++)
	//{
	//	for (  sum ; sum != 4 * day + 48 && sum != 6 * day - 8; sum++)
	//	{
	//		if (sum == 4 * day + 48 && sum == 6 * day - 8)
	//			printf("�ƻ���%d�죬����%d��", day, sum);
	//	}
	//}

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���Լ��
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int i = (a > b) ? b : a;
//	for (; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("�ҵ�����%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//����Ĵ�ӡ,���걻4���������ܱ�100���������߱�400����
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			ret++;
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			ret++;
//		}
//	}
//	printf("\n������%d��\n", ret);
//	return 0;
//}

////��ӡ����
//int main()
//{
//	int i = 0;
//	
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//�ٶ�������
//		for (int a = i-1; a > 1; a--)
//		{
//			if (i%a == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
////����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ
//int main()
//{
//	int i = 0,a=0;
//	double o = 0, j = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i += 2)	
//		o = o + 1.0 / i;	
//	for (a = 2; a <= 100; a += 2)
//		j = j + 1.0 / a;
//	sum = o - j;
//	printf("%lf\n", sum);
//	return 0;
//}
//��ʮ�������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		scanf("%d ", &arr[i]);
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
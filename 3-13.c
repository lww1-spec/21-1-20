#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//&a,&b;
//	int* arr[] = { &a, &b };
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pfA[4])(int, int);//����ָ�������
//
//	//����ָ������
//
//	//pfArr2���Ǻ���ָ������
//	//int(*pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}

//�����������Ӽ��˳�
//void menu()
//{
//	printf("*******************\n");
//	printf("***1.Add  2.Sub****\n");
//	printf("***3.mul  4.div****\n");
//	printf("***0.exit**********\n");
//	printf("*******************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
////int main()
////{
////	int x = 0;
////	int y = 0;
////	int ret = 0;
////	int input = 0;
////	int(*pfArr[])(int,int) = { 0, Add, Sub, Mul, Div };
////	do
////	{
////		menu();
////		printf("��ѡ��>");
////		scanf("%d", &input);
////		if (0 == input)
////		{
////			printf("�˳�����\n");
////			break;
////		}
////		else if (input >= 1 && input <= 4)
////		{
////			printf("����������������:>");
////			scanf("%d%d", &x, &y);
////
////			ret = pfArr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else
////			printf("ѡ�����\n");
////
////		
////	}while (input);
////
////	return 0;
////}
//
//void calc(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
////����ָ������
////��ź���ָ�������
////&��������  ����
////ָ����ָ�������ָ����
//
//
////int main()
////{
////	//ָ��ӷ�����ĺ���ָ��
////	int(*p)(int, int);//����ָ��
////	//����ָ�������
////	int(*pArr[4])(int, int);
////	//ָ����ָ�������ָ��
////	int(*(ppArr)[4])(int,int) = &pArr;
////
////
////	return 0;
////}
//
//void test1()
//{
//	printf("hhhhh\n");
//}
////�ص�������ͨ������ָ����õĺ���
////�������Ρ�������ָ��
//
//void test2(void(*p)())
//{
//	p();
//}
//
//int main()
//{
//	test2(test1);
//
//	return 0;
//}

//ð������
//
//��һ�������������ð�������
//

//void bobble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	print(arr, sz);
//}

//�⺯������qsort����quick sort
//�����������͵�����

void test1()
{
	//qsort������������
	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);


}

int main()
{
	test1();

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r;i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5],int r,int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(p + i);----��i�У�i��0��ʼ
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			//*(p+i)������i��֮�����һ�У�Ҳ�൱����һ�е�������
//			//p+i������i�����һ�еĵ�ַ
//			//*(p+i)+j������i�к����һ�е��±�Ϊj��Ԫ�ص�ַ
//			//*(*(p + i) + j)������i�к����һ�е��±�Ϊj��Ԫ��
//		}
//		printf("\n");
//	}
//
//}
////��ά���鴫�Σ�������Ҳ����Ԫ�صĵ�ַ����ά�������Ԫ���ǵ�һ��
////����ȥ�ľ��ǵ�һ�еĵ�ַ
//
//print3(int*p,int sz)
//{
//	 
//}
//
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	int a[5];
//	print3(a, 5);
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//
//	return 0;
//}

//void test(int *p)
//{
//
//}
//
//int main()
//{
//	int a =10 ;
//	int *pa = &a;
//	int arr[10] = { 0 };
//	test(&a);
//	test(pa);
//	test(arr);
//
//	return 0;
//}

//void test(int **p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int **ppa = &pa;
//	int* arr[10];
//
//	test(&pa);
//	test(ppa);
//	test(arr);
//
//}

//int main()
//{
//	int* arr[5];
//	int data[10] = {0};
//	int(*pd)[10] = &data;
//
//	//int(*)[10]����
//	//int(*)[10]pd����
//
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int* p=arr;//��Ԫ�ص�ַ
	int (*pa)[10]=&arr;//����ĵ�ַ

	int data[3][5] = { 0 };
	int(*pd)[5] = data;//��ά������Ԫ�صĵ�ַ
	int (*p2)[3][5]=&data;
	
	return 0;
}
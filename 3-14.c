#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//
////void qsort(void *base,
////	size_t num,
////	size_t width,
////	int(*cmp)(const void *e1, const void *e2));
//
//int cmp_int(const void *e1, const void *e2)
//{
//	//if (*(int*)e1 > *(int*)e2)
//	//{
//	//	return 1;
//	//}
//	//else if (*(int*)e1 < *(int*)e2)
//	//{
//	//	return -1;
//	//}
//	//else
//	//	return 0;
//
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 1, 5, 3, 2, 6, 4, 7, 9, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int );
//	print(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////int cmp_stu_by_age(const void*e1, const void*e2)
////{
////	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//
//int cmp_stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void test2()
//{
//	struct Stu arr[] = { { "zhangsan", 20 }, { "lisi", 31 }, { "wangwu", 15 } };
//	//����������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int*pa = &a;
//	//*pa = 20;
//
//	//void*pv = &a;
//	//void*��ָ��������Խ����������͵ĵ�ַ
//	//��Ϊvoid*��ָ�룬û�о������ͣ����Բ��ܽ����ò���������++--����
//
//	//*pv = 0;
//	//pv++;
//
//	return 0;
//}

//ģ��ʵ��qsort
//ģ��ʵ��qsort
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,size_t sz, size_t width, int(*cmp)(const void *e1,const void*e2))
//{
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��������Ԫ�رȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				//�������˳��ͽ���
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//int cmp_int(const void*e1, const void*e2)
//{ 
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test3()
//{
//	//qsort ������������
//	int arr[] = { 2, 3, 4, 5, 3, 4, 6, 8, 7, 9, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}
//
//int main()
//{
//	test3();
//
//	return 0;
//}

//sizeof�������������������������ռ�ռ��С��
//���ͣ�����������
//�����С��ʱ�򣬲��ں��ڴ��зŵ�ֵ

//strlen�������ַ��������ȵ�
//ֻʹ���ڣ��ַ������ַ�����,�󳤶�ʱ��ע\0 
//�⺯��

int main()
{
	

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//printf("%d ", *(p + i));
//		printf("&arr[%d]=%p<==>%p\n", i, &arr[i],  p + i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[3][5] = { 0 };
//	arr;//��ά�����������Ҳ��������Ԫ�صĵ�ַ
//��һ�е���Ԫ�ص�ַ
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	
//	int **ppa = &pa;//ppa�Ƕ���ָ��
//	int ***pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//ָ������
//�������顪��������ε�����
//�ַ����顪������ַ�������
//ָ�����顪����ŵ�ָ��
//int main()
//{
//	//int arr[10] = { 0 };
//	//char ch[5] = { 'a', 'b' };
//	//ָ������
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//�������ָ�������
//	int *arr[3]={&a, &b, &c};//arr����ָ������
//	char* ch[5];//����ַ�ָ�������
//
//	return 0;
//}

//int main()
//{
//	char*p = "abcder";
//	printf("%s\n", p);
//	//�ַ�ָ�������
//	char* arr[] = {"abcdef","hello","bit"};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//
//	return 0;
//}


//�ṹ��
//����һ��ѧ��
//����
//����
//�绰
//�Ա�
//struct Stu
//{
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;//s1,s2��ȫ�ֵ�
//
//struct Stu s3;
//
//int main()
//{
//	struct Stu s;
//	struct Stu s1;
//	struct Stu s2;//�ֲ�����
//	
//	return 0;
//
//}

//struct Point
//{
//	int x;
//	int y;
//};
//
//struct S
//{
//	char arr[10];
//	struct Point p;
//	double d;
//	int *ptr;
//};
//
//int main()
//{
////	struct Point p = { 1, 2 };
////	printf("%d %d\n", p.x, p.y);
//	int a = 2021;
//
//	struct S s = { "abcdef", { 2, 3 }, 3.14, &a};
//	printf("%s %d %d %lf %d\n", s.arr, s.p.x, s.p.y, s.d,*(s.ptr));
//	return 0;
//}

//struct S
//{
//	char arr[1000];
//	int num;
//	double d;
//};
//
//void print1(struct S ss)
//{
//	printf("%s %d %lf\n", ss.arr, ss.num, ss.d);
//}
////���Ҫ��
//void print2(struct S* ps)
//{
//	printf("%s %d %lf\n", ps->arr, ps->num, ps->d);
//}
//
//int main()
//{
//	struct S s = { "hello bit", 100, 99.8 };
//	print1(s);//��ֵ
//	print2(&s);//��ַ
//	return 0;
//}

int Add(int x, int y)//ÿһ�κ������ö�Ҫ��ջ����Ϊ��������ռ�
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);

	return 0;
}
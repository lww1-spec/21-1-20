#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	//ָ������ - ���ָ�������
//	int* arr[5];//
//	//����ָ�� - ָ�������ָ��
//	int data[10] = {0};
//	int (*pd)[10] = &data;
//	//int (*)[10]
//	//int a = 10;
//
//	return 0;
//}
//void test1(int*p)
//{}
//void test2(int(*p)[4])
//{}
//int main()
//{
//	//һά����
//	int arr[10];
//	int* p = arr;//��Ԫ�صĵ�ַ
//	int (*pa)[10] = &arr;//����ĵ�ַ
//	test1(arr);
//
//	//��ά����
//	int data[3][4];
//	int (*pd)[4] = data;//��Ԫ�صĵ�ַ
//	int (*p2)[3][4] = &data;
//	test2(data);
//
//	return 0;
//}

//����ָ�� - ָ�����ε�ָ��
//����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//����ָ�� - ָ������ָ�� - ��ź����ĵ�ַ

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{
//}
//
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//
//	//char arr[5] = {0};
//	//char (*parr)[5] = &arr;
//
//	//printf("%p\n", &Add);
//	//int (*pf)(int, int) = &Add;//pf���Ǻ���ָ��
//
//	//void (*p)(char*) = &test;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	int(* pf)(int, int) = &Add;//&Add;
//
//	int ret = (*pf)(2, 3);//int ret = Add(2, 3);
//	//Add(2, 3);
//	//pf(2, 3);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
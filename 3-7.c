#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)//С��
//		return 1;
//	else //���
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;	
//}
//
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	char a = -1;
//
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c); 
//	//a -1,b -1,c 255
//
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//} 

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//
//	return 0;
//}
//#include<windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//
//	}
//	//��ѭ��
//	return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <=255; i++)
//	{
//		printf("hello world\n");
//	}
//
//	return 0;
//}


int main()
{
	int n = 9;
	float *pFloat = (float *)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);

	*pFloat = 9.0; 
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);

	return 0;
}
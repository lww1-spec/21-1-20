#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}

//λ�� - ������λ
//struct A
//{
//	int _a : 2;//_aֻ��Ҫ��������λ
//	int _b : 5;//_bֻ��Ҫ�������λ
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct A sa;//
//	//һ�ο���һ������ 4���ֽ�
//	//4����>32
//	//_a-2
//	//_b-5
//	//_c-10
//	//4����>32
//	//_d-30
//	//
//
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;
	printf("%d\n", sizeof(struct S));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int * p=&a;//ָ�����
//	*p = 100;
//
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	char *p = &a;
//	*p = 0;
//	//ָ������͵ĵ�һ�����þ��ǣ�������ָ��ķ���Ȩ�ޣ�Ҳ�����ܷ��ʼ����ֽ�
//	//int*   --4
//	//char*  --1
//	//short* --2
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	//ϣ����arr��ʮ�����εĿռ䣬������ʮ���ֽ�
	//ÿ���ֽڷ�һ���ַ���ȥ
	char *p = arr;
	int i = 0;
	for (i = 0; i < 40; i++)
	{
		*(p + i) = 'x';
	}
	for (i = 0; i < 40; i++)
	{
		printf("%c ", *(p + i));
	}
	//int*p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n", *(p + i));
	//}

	//char*pc = arr;
	////printf("%p\n",arr);
	///*printf("%p\n", arr);*/
	//printf("%p\n", pa);
	//printf("%p\n", pa+1);
	//printf("------------\n");
	//printf("%p\n", pc);
	//printf("%p\n", pc+1);


	//ָ�����;�����ָ��+/-1�߶��ľ���
	//7
	return 0;
}


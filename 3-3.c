#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ���ȥָ�룬�õ��ľ���ֵ�ǵõ�����ָ���ָ��֮���Ԫ�ظ���
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &ch[3]);
//	//ָ��-ָ�룬�����ǰ�������ǣ���ָ��ָ��ͬһ���ڴ�
//	return 0;
//}
//������
//�ݹ�
//int my_strlen(char* str)
//{
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	/*if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;*/
//
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a;
//	int b;
//	int c;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		int t = a>b ? a : b;
//		t = t>c ? t : c;
//		printf("%d\n", t);
//	}
//	return 0;
//}
//
//int main()
//{
//	char zi;
//	while (scanf("%c", &zi) != EOF)
//	{
//		if (zi >= 'a'&&zi <= 'z')
//		{
//			printf("%c\n", zi = zi - 32);
//		}
//		if (zi >= 'A'&&zi <= 'Z')
//		{
//			printf("%c\n", zi = zi + 32);
//		}
//	}
//	return 0;
//}
//
//int test()
//{
//	int x = 10;
//	int y = 20;
//	if (1)
//		return x;
//	return y;
//}
//
//int main()
//{
//	printf("%d\n", test());
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	if (num == 5)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	if (5 == num)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//		for (int i = 1; i <= 100; i+=2)
//		{
//				printf("%d ", i);
//		}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	...
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", day);
//	switch (day)//����������α��ʽ
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");	
//		break;
//	case 3:
//		printf("������\n");	
//		break;
//	case 4:
//		printf("������\n");	
//		break;
//	case 5:
//		printf("������\n");	
//		break;
//	case 6:
//		printf("������\n"); 
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", day);
//	switch (day)//����������α��ʽ
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//  default:
//      printf("ѡ�����");
//      break;
//	}
//}

//int main()
//{
//	int n =1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case1:
//			n++;
//		case2:
//			m++; 
//			n++; 
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n", m, n);
//}

//int main()
//{
//	int i = 1;
//	while (i >= 1 && i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//getchar-�ӱ�׼���루���̣���ȡһ���ַ�
//	ch = getchar();
//	//putchar-��ӡһ���ַ�����׼�������Ļ��
//	putchar(ch);
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//��ȡʧ�ܵ�ʱ��getchar����EOF
//	//EOF- end of fileֵ��-1
//	//ctrl+z���ȡʧ��
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//    ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}

//������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����

//#include<windows.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);
//		i = 5;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	do{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//int main()
//{
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum = sum + ret;
//	}
//	printf("%d ",ret);
//	printf("%d ", sum);
//	//n��Ҫ̫��
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//�������������е�ĳ���������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	//�������������е�ĳ���������
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{

		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
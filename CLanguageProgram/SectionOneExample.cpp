//20250505
//1.ʲô�ǳ���ʲô�ǳ�����ƣ�
//2.Ϊʲô��Ҫ��������ԣ��߼��������������Щ�ص㣿
//3.�����������ʺ��弰�京��.

//4.��дһ��c����,����ʱ��� hello world.
//#include <stdio.h>
//
//int main()
//{
//	printf("hello world.");
//	return 0;
//}

//5.���α�p14
//#include <stdio.h>
//
//int main()
//{
//	int countOUT,countIN,count;
//	countOUT = 0;
//	while (countOUT < 4)	//���ѭ�� ��������
//	{
//		count = 0;	//Ϊʲô��ѭ���� ��Ҫ�����õ�����!!!
//		while (count < countOUT)	//�������� �õ�*ǰ�м����ո�
//		{
//			printf(" ");
//			count++;
//		}
//		countIN = 0;
//		while (countIN < 4) //����ѭ����ӡ�ĸ�*
//		{	
//			printf("*");
//			countIN++;
//		}
//		printf("\n");
//		countOUT++;
//	}
//	return 0;
//}

//ע���ж���������

//��дһ��c���Գ���,����ʱ����a,b,c����ֵ,������������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c)	//�ж����ֵ����
{
	int max = 0;
	if (a > b) max = a;
	else max = b;
	if (b > c) max = b;
	else max = c;
	return max;
}

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("max = %d\n", max(a, b, c));

	return 0;
}

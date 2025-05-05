//20250505
//1.什么是程序？什么是程序设计？
//2.为什么需要计算机语言？高级计算机语言有哪些特点？
//3.解释以下名词含义及其含义.

//4.编写一个c程序,运行时输出 hello world.
//#include <stdio.h>
//
//int main()
//{
//	printf("hello world.");
//	return 0;
//}

//5.见课本p14
//#include <stdio.h>
//
//int main()
//{
//	int countOUT,countIN,count;
//	countOUT = 0;
//	while (countOUT < 4)	//外层循环 控制行数
//	{
//		count = 0;	//为什么在循环内 主要是重置的作用!!!
//		while (count < countOUT)	//根据行数 得到*前有几个空格
//		{
//			printf(" ");
//			count++;
//		}
//		countIN = 0;
//		while (countIN < 4) //各行循环打印四个*
//		{	
//			printf("*");
//			countIN++;
//		}
//		printf("\n");
//		countOUT++;
//	}
//	return 0;
//}

//注意判断问题所在

//编写一个c语言程序,运行时输入a,b,c三个值,输出其中最大者
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int a, int b, int c)	//判断最大值函数
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

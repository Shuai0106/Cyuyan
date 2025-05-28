#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int x,int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int pow(int x,int y)
{
	if (y == 0)
	{
		return 1;
	}
	else 
	{
		return x * pow(x, y - 1);
	}
}
void menu()
{
	printf("************************\n");
	printf("*****  1.   add    *****\n");
	printf("*****  2.   sub    *****\n");
	printf("*****  3.   mul    *****\n");
	printf("*****  4.   div    *****\n");
	printf("*****  5.   pow    *****\n");
	printf("*****  0.   exit   *****\n");
	printf("************************\n");
}
int main()
{
	int (*calu[])(int,int) = {0,add, sub, mul, div, pow};
	int input = 0;
	do
	{
		
		menu();
		scanf("%d", &input);
		if (1<=input && input<= 5)
		{
			printf("请输入俩个数>\n");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			int res = calu[input](x,y);
			printf("%d\n", res);
		}
		else if (input == 0)
		{
			printf("退出计算");
		}
		else
		{
			printf("重新选择");
		}
	} while (input);
	return 0;
}
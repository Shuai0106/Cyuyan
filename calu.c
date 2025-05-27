#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int x, int y)
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
void calu(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入俩个数>");
	scanf("%d %d", &x, &y);
	int ret =pf(x, y);
	printf("%d\n", ret);
}
void menu()
{
	printf("************************\n");
	printf("******* 1.  add  *******\n");
	printf("******* 2.  sub  *******\n");
	printf("******* 3.  mul  *******\n");
	printf("******* 4.  div  *******\n");
	printf("******* 0.  exit *******\n");
	printf("************************\n");
}
int main()
{
	int input = 0;
	do
	{
		
		menu();
		printf("请选择>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			calu(add);
			break;
		case 2:
			calu(sub);
			break;
		case 3:
			calu(mul);
			break;
		case 4:
			calu(div);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}
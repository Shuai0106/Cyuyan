#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void text()
{
	printf("heeh\n");
}


//int main()
//{
//	int a = 1;
//
//	if (*(char*)&a)
//	{
//		printf("Ð¡¶Ë");
//	}
//	else
//	{
//		printf("´ó¶Ë");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1023;
//	printf("%d", a);
//	return 0;
//}
int main()
{
	int a = 385;
	a = (char)a;
	printf("%c", a);
	return 0;
}
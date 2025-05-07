#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p;
//	for (p = arr; p < &arr[10];)
//	{
//		*p++ = 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int my_len(char* p)
//{
//	char* start = p;
//	while (*p !='\0')
//	{
//		p++;
//	}
//	return p - start;
//}
//int my_len(char* p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}

int my_len(char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	return 1 + my_len(p + 1);
}
int main()
{
	
	int len = my_len("vbrhj");
	printf("%d", len);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* ch)
{
	int count = 0;
	while (*ch != '\0')
	{
		count++;
		ch++;
	}
	return count;
}
int main()
{
	int sz = my_strlen("abvkja");
	printf("%d\n", sz);
	int arr[10] = {0};
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int j = 0, k = 0;
	int arr1[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arr1[k++] = arr[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr1[k++] = arr[i];
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		printf("%9d,", arr1[i]);
	}
	return 0;
}
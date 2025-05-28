#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble(int* p,int sz)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (p[j] > p[j + 1])
			{
				int r = p[j];
				p[j] = p[j + 1];
				p[j + 1] = r;
				flag = 0;
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
}
//int main()
//{
//	int arr[] = { 8,6,5,4,1,2,3,9,7, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
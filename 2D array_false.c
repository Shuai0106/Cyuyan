#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void sb(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		//printf("%d\n", *(p + i));
		printf("%d\n", p[i]);
	}
	
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 ,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	sb(arr, sz);

	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 9,2,3,4 };
	int arr3[] = { 1,9,3,5 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}

	return 0;


}
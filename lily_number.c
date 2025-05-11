#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int is_lilynumber(int i)
{
	int n = 0;
	int r = i;
	while (r)
	{
		r /= 10;
		n++;
	}
	r = i;
	int j = 0;
	int sum = 0;
	for (j = 0; j < n; j++)
	{
		int k = (int)pow(i % 10, n);
		sum += k;
		i /= 10;
	}
	return sum == r;
}
int main()
{
	int i = 0;
	for (i = 1; i <= 10000; i++)
	{
		if (is_lilynumber(i))
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}

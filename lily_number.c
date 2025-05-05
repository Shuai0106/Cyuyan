#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main()
{
	int n = 0;
	for (n = 1; n <= 1000000; n++)
	{
		if (sizeof(n) >= 3)
		{
			int si = sizeof(n);
			int j = 0;
			int sum = 0;
			for (j = 1; j <= si; j++)
			{
				int k = (int)pow(10, j);
				sum += (n / k) * (n % k);
			}
			if (sum == n)
				printf("%d ", n);
		}
	}
	return 0;
}

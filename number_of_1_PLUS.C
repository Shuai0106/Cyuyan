#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	int count = 0;
	int ret = n ^ m;
	while (ret)
	{

		ret = ret & (ret - 1);
		count++;
	}
	printf("%d\n", count);

	int i = 0;
	int count1 = 0;
	for (i = 0; i < 32; i++)
	{
		if (((m >> i) & 1) != ((n >> i) & 1))
		{
			count1++;
		}
	}
	printf("%d\n", count1);

	int j = 0;
	int t = sizeof(j);
	char ch = 'ab';
	int p = strlen('vbuv');
	printf("%d\n", p);

	printf("%d\n", t);
	return 0;
	
}
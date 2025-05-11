#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch[10001] = { 0 };
	gets(ch);
	int sz = strlen(ch);
	int left = 0;
	int right = sz - 1;

	while (left < right)
	{
		char r = ch[left];
		ch[left] = ch[right];
		ch[right] = r;
		left++;
		right--;
	}
	printf("%s", ch);

	return 0;

}
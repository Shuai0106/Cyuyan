#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int digits[] = { 9,9 };
	int sz = sizeof(digits) / sizeof(digits[0]);
    int i = 0;
    int b = 0;
    int flag = 0;
    for (i = 0; i < sz; i++)
    {
        b += digits[i] * pow(10, sz-1-i);
        if (digits[i] == 9)
        {
            flag += 1;
        }
    }
    if (flag == sz)
    {
        sz += 1;
    }
    b += 1;
    printf("%d ", b);
    
    for (i = 0; i < sz; i++)
    {
        
        digits[i] = b / pow(10,sz - 1 - i);
        b %= (int)pow(10, sz - 1 - i);
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", digits[i]);
    }
	return 0;
}
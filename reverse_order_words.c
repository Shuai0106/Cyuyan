#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tep = *left;
		*left = *right;
		*right = tep;
		left++;
		right--;
	}
}
void find(char* ch,char* ch1)
{

}
int main()
{
	char ch[100];
	fgets(ch, sizeof(ch), stdin);
	ch[strcspn(ch, "\n")] = '\0';
	int sz = strlen(ch);
	
	reverse(ch, ch + sz - 1);

	char* start = ch;
	char* end = start;
	while (*start)
	{
		
		while (*end != ' ' && *end !='\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			end++;
		}
		
		start = end;
	}

	printf("%s", ch);


	return 0;
}
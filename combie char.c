#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
//int main()
//{
//	/*unsigned int a;
//	for (a = 0; a >= 0; a--)
//	{
//		printf("%u\n", a);
//	}*/
//	char ch = 'b';
//	printf("%c", ch);
//	char ch1[100] = { 'bbr','tbrt' };
//	printf("%s", ch1[1]);
//
//	return 0;
//}//一切的运算都是在补码上进行的，不同的变量的类型只会表达出不同的意义，它们有不同的解释逻辑
//char* mergeAlternately(char* word1, char* word2)
//{
//    char ch[200];
//    int i = 0;
//    while (*word1 != '\0' && *word2 != '\0')
//    {
//        ch[i] = *word1;
//        ch[i + 1] = *word2;
//        word1++;
//        word2++;
//        i += 2;
//    }
//    if (*word1 == '\0')
//    {
//        for (i = i + 2; *word2 != '\0'; word2++, i++)
//        {
//            ch[i] = *word2;
//        }
//    }
//    else
//    {
//        for (i = i + 2; *word1 != '\0'; word1++, i++)
//        {
//            ch[i] = *word1;
//        }
//    }
//    return ch;
//}
char* mergeAlternately(char* word1, char* word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int len = len1 + len2;
    char* res = (char*)malloc((len+1) * sizeof(char));
    if (res == NULL)
    {
        return NULL;
    }
    int i = 0,j = 0, k = 0;
    while (i < len1 && j < len2)
    {
        res[k++] = word1[i++];
        res[k++] = word2[j++];
    }
    while (i < len1)
    {
        res[k++] = word1[i++];
    }
    while (j < len2)
    {
        res[k++] = word2[j++];
    }
    res[k] = '\0';
    return res;
}
int main()
{
    char w1[] = "ghij";
    char w2[] = "abcdef";
   
    char* res = mergeAlternately(w1, w2);
    printf("%s", res);
	return 0;
}
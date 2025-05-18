#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int strStr(char* haystack, char* needle)
{
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    int i = 0, j = 0, count = 0;
   
    
        for (i = 0; i <= len1 - len2; i++)
        {
            for (j = 0, count = 0; j < len2; j++)
            {
                if (haystack[i + j] == needle[j])
                {
                    count++;
                }
            }
            if (count == len2)
            {
                return i;
            }
        }
        return -1;
} 
  
int main()
{
    char ch1 = "abc";
    char ch2 = "c";
    int res  = strStr(ch1, ch2);
    printf("%d ", res);
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int cmp(const void* _a, const void* _b)
{
	char a = *(char*)_a;
	char b = *(char*)_b;
	return b - a;//����ȽϺ���  ��a-b��Ϊ���򣬡�b-a��Ϊ����
}
int cmp1(const void* _a, const void* _b)
{
	int a = *(int*)_a;
	int b = *(int*)_b;
	return b - a;//һ���ģ�ֻ���������������
}

int main()
{
	char ch1[] = "haifdhviafeuh";
	qsort(ch1, strlen(ch1), sizeof(char),cmp);//�ĸ�������1.Ҫ���������  2.Ԫ�صĸ���  3.ÿ��Ԫ�صĴ�С  4.�Զ���ıȽϺ���
	printf("%s", ch1);
	int arr[] = { 2,5,8,9,4,5,6,1,2,3,8,7,9,5,46,8,998,65};
	qsort(arr, (sizeof(arr) / sizeof(arr[0])), sizeof(int), cmp1);
	int i = 0;
	for (i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
	{
		printf("%d\n", *(arr + i));
	}
	
	return 0;
}
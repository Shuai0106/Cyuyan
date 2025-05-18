#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
int cmp(const void* _a, const void* _b)
{
	char a = *(char*)_a;
	char b = *(char*)_b;
	return b - a;//定义比较函数  “a-b”为升序，“b-a“为降序
}
int cmp1(const void* _a, const void* _b)
{
	int a = *(int*)_a;
	int b = *(int*)_b;
	return b - a;//一样的，只是这个是整形数组
}

int main()
{
	char ch1[] = "haifdhviafeuh";
	qsort(ch1, strlen(ch1), sizeof(char),cmp);//四个参数，1.要排序的内容  2.元素的个数  3.每个元素的大小  4.自定义的比较函数
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct apple
{
	int size;
	char taste[10];
	char color[5];
};
int main()
{
	struct apple a1 = { 15,"sweet","red" };
	printf("%d %s %s", a1.size, a1.taste, a1.color);
	struct apple* ap1 = &a1;
	printf("%d %s %s", ap1->size, ap1->taste, ap1->color);

	return 0;
}
#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d", &a);
	if (a % 400 == 0)
		b = true;
	else if (a % 100 == 0)
		b = false;
	else if (a % 4 == 0)
		b = true;
	else
		b = false;
	printf("%d\n", b);
	return 0;
}
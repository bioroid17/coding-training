#include <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("SK\n");
	else
		printf("CY\n");
	return 0;
}
#include <stdio.h>
int main(void)
{
	int n, line;
	scanf("%d", &n);
	line = 2 * n - 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (int i = n + 1; i <= line; i++)
	{
		for (int j = n + 1; j <= i;j++)
			printf(" ");
		for (int j = i; j <= line;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
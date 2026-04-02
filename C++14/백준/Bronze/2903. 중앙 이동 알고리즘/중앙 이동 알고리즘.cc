#include <stdio.h>
int main(void)
{
	int n, dots[16];
	scanf("%d", &n);
	dots[0] = 2;
	for (int i = 1; i < 16; i++)
		dots[i] = 2 * dots[i - 1] - 1;
	printf("%d\n", dots[n] * dots[n]);
	return 0;
}
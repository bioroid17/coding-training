#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	for (int y = 1; y <= 9; y++)
		printf("%d * %d = %d\n", x, y, x*y);

	return 0;
}
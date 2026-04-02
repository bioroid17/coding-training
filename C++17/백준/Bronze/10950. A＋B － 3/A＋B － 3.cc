#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	for (int y = 1; y <= x; y++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}
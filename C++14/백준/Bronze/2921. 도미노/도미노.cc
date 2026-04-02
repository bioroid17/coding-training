#include <stdio.h>
int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int a = 0, b = 0; a <= n && b <= n; b++)
	{
		sum = sum + a + b;
		if (b == n)
		{
			a++;
			b = a - 1;
		}
	}
	printf("%d\n", sum);
	return 0;
}
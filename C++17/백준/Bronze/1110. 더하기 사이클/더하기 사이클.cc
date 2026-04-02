#include <stdio.h>
int main(void)
{
	int m, n, a, b, cycle = 1;
	scanf("%d", &n);
	m = n;
	for (; ; cycle++)
	{
		a = n % 10;
		b = n / 10;
		n = 10*a + ((a + b) % 10);
		if (m == n)
			break;
	}
	printf("%d\n", cycle);
	return 0;
}
#include <stdio.h>
int main(void)
{
	int m, n, sum=0, min;
	double div;
	scanf("%d", &m);
	scanf("%d", &n);
	for (; n >= m; n--)
	{
		for (div = 1; div <= n; div++)
		{
			if (n / div == div)
			{
				sum = sum + n;
				min = n;
			}
		}
	}
	if (sum == 0)
		printf("-1");
	else
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int a, b, x[10000];
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
		scanf("%d", &x[i]);

	for (int i = 0; i < a; i++)
	{
		if (x[i] < b)
			printf("%d ", x[i]);
	}

	return 0;
}
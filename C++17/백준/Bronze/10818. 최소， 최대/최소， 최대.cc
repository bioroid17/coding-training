#include <stdio.h>
int main(void)
{
	int t = 0, a = 0;
	int min = 1000000, max = -1000000;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d ", &a);
		if (min > a)
			min = a;
		if (max < a)
			max = a;
	}
	printf("%d %d\n", min, max);
	return 0;
}
#include <stdio.h>
int main(void)
{
	int n, m, road[2][100], limit = 0, run = 0, length, total = 0, max = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &length, &limit);
		for (int j = 0 + total; j < length + total; j++)
			road[0][j] = limit;
		total += length;
	}
	total = 0;
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &length, &run);
		for (int j = 0 + total; j < length + total; j++)
			road[1][j] = run;
		total += length;
	}
	for (int i = 0; i < 100; i++)
	{
		if (road[1][i] - road[0][i] > max)
			max = road[1][i] - road[0][i];
	}
	printf("%d\n", max);
	return 0;
}
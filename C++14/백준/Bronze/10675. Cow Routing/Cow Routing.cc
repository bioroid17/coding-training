#include <stdio.h>
#include <string.h>
int main(void)
{
	int a, b, n, route[500], result = 1001;
	scanf("%d %d %d", &a, &b, &n);
	for (int i = 0; i < n; i++)
	{
		int cost, city, start = 0, end = 0;
		scanf("%d %d", &cost, &city);
		for (int j = 0; j < city; j++)
		{
			scanf("%d", &route[j]);
			if (route[j] == a)
				start = route[j];
			if (route[j] == b && start != 0)
				end = route[j];
		}
		if (start == a && end == b && cost < result)
			result = cost;
	}
	if (result > 1000)
		printf("-1\n");
	else
		printf("%d\n", result);
	return 0;
}
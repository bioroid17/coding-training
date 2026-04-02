#include <stdio.h>
#include <math.h>
int main(void)
{
	int x, y, distance = 0;
	scanf("%d %d", &x, &y);
	if (x <= y)
	{
		for (int i = 0; ;i++)
		{
			distance = distance + pow(2, i);
			if (i % 2 == 0)
				x = x + pow(2, i);
			else
				x = x - pow(2, i);
			if (x >= y)
			{
				x = x - pow(2, i);
				distance = distance - (pow(2, i) - (y - x));
				printf("%d\n", distance);
				break;
			}
			if (i % 2 == 1)
				x = x + pow(2, i);
			else
				x = x - pow(2, i);
			distance = distance + pow(2, i);
		}
	}
	else
	{
		for (int i = 0; ;i++)
		{
			distance = distance + pow(2, i);
			if (i % 2 == 0)
				x = x + pow(2, i);
			else
				x = x - pow(2, i);
			if (x <= y)
			{
				x = x + pow(2, i);
				distance = distance - (pow(2, i) - (x - y));
				printf("%d\n", (int)distance);
				break;
			}
			if (i % 2 == 1)
				x = x + pow(2, i);
			else
				x = x - pow(2, i);
			distance = distance + pow(2, i);
		}
	}
	return 0;
}
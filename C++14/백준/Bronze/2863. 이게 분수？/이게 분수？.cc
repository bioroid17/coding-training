#include <stdio.h>
int main(void)
{
	double arr[2][2];
	double max = 0, leastnum = 0, num, blank;
	for (int a = 0; a < 2; a++)
	{
		for (int b = 0; b < 2; b++)
			scanf("%lf", &arr[a][b]);
	}
	for (int i = 0; i < 4; i++)
	{
		num = arr[0][0] / arr[1][0] + arr[0][1] / arr[1][1];
		if (num > max)
		{
			max = num;
			leastnum = i;
		}
		blank = arr[0][0];
		arr[0][0] = arr[1][0];
		arr[1][0] = arr[1][1];
		arr[1][1] = arr[0][1];
		arr[0][1] = blank;
	}
	printf("%d\n", (int)leastnum);
	return 0;
}
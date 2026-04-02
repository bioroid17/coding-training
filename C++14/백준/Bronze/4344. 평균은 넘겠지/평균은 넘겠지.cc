#include <stdio.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int student;
		double score[1000], sum=0, avg, overavg=0;
		scanf("%d", &student);
		for (int n = 0; n < student; n++)
		{
			scanf("%lf", &score[n]);
			sum = sum + score[n];
		}
		avg = sum / student;
		for (int n = 0; n < student; n++)
		{
			if (score[n] > avg)
				overavg++;
		}
		printf("%.3lf%%\n", 100 * overavg / student);
	}
	return 0;
}
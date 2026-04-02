#include <stdio.h>
int main(void)
{
	int k, n, t[100], time = 0, j = 0;
	char z[100];
	scanf("%d", &k);
	scanf("%d", &n);
	for (int i = 0; i < n;)
	{
		scanf("%d %c", &t[i], &z[i]);
		if (z[i] == 'T')
		{
			time = time + t[i];
			j++;
		}
		else if (z[i] == 'N' || z[i] == 'P')
			time = time + t[i];
		if (time >= 210)
		{
			if(z[i]=='T')
				j--;
			if ((k + j) % 8 == 0)
				printf("8\n");
			else
				printf("%d\n", (k + j) % 8);
			break;
		}
	}
	return 0;
}
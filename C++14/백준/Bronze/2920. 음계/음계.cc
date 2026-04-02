#include <stdio.h>
int main(void)
{
	int n, sound[8], cnt = 0;
	for (int i = 0; i < 8; i++)
		scanf("%d", &sound[i]);
	if (sound[0] == 1)
	{
		for (int i = 0; i < 8; i++)
		{
			if (sound[i] == i + 1)
				cnt++;
		}
		if (cnt == 8)
			printf("ascending\n");
		else
			printf("mixed\n");
	}
	else if (sound[0] == 8)
	{
		for (int i = 0; i < 8; i++)
		{
			if (sound[i] == 8 - i)
				cnt--;
		}
		if (cnt == -8)
			printf("descending\n");
		else
			printf("mixed\n");
	}
	else
		printf("mixed\n");
	return 0;
}
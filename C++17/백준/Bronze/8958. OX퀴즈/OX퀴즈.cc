#include <stdio.h>
#include <string.h>
int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char quiz[81];
		int add = 0, score = 0;
		scanf("%s", quiz);
		for (int i = 0; i < strlen(quiz);i++)
		{
			if (quiz[i] == 'O')
			{
				add++;
				score += add;
			}
			else
				add = 0;
		}
		printf("%d\n", score);
	}
	return 0;
}
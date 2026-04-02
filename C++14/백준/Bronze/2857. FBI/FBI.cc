#include <stdio.h>
#include <string.h>
int main(void)
{
	int cnt = 0;
	for (int i = 1; i <= 5; i++)
	{
		char name[11];
		scanf("%s", name);
		for (int t = 0; t < strlen(name) - 2; t++)
		{
			if (name[t] == 'F' && name[t + 1] == 'B' && name[t + 2] == 'I')
			{
				printf("%d ", i);
				cnt++;
				break;
			}
		}
	}
	if (cnt == 0)
		printf("HE GOT AWAY!\n");
	return 0;
}
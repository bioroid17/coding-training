#include <stdio.h>
#include <string.h>
int main(void)
{
	int m;
	scanf("%d", &m);
	bool set[20] = { 0, };
	while (m--)
	{
		char operate[7];
		int x;
		scanf("%s", operate);
		if (strcmp(operate, "add") == 0)
		{
			scanf("%d", &x);
			set[x - 1] = true;
		}
		if (strcmp(operate, "remove") == 0)
		{
			scanf("%d", &x);
			set[x - 1] = false;
		}
		if (strcmp(operate, "check") == 0)
		{
			scanf("%d", &x);
			printf("%d\n", set[x - 1]);
		}
		if (strcmp(operate, "toggle") == 0)
		{
			scanf("%d", &x);
			set[x - 1] = (set[x - 1] + 1) % 2;
		}
		if (strcmp(operate, "all") == 0)
		{
			for (int i = 0; i < 20; i++)
				set[i] = true;
		}
		if (strcmp(operate, "empty") == 0)
		{
			for (int i = 0; i < 20; i++)
				set[i] = false;
		}
	}
	return 0;
}
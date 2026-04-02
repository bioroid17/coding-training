#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[101];
	scanf("%s", a);
	int i;
	for (int j = 97; j < 123; j++)
	{
		for (i = 0; i < strlen(a); i++)
		{
			if (a[i] == j)
			{
				printf("%d ", i);
				break;
			}
		}
		if(i==strlen(a))
			printf("-1 ");
	}
	return 0;
}
#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	for (int i = x; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}
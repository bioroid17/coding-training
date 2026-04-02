#include <stdio.h>
int main(void)
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (y < 45)
	{
		if (x == 0)
			x = 24;
		printf("%d %d\n", x - 1, 15 + y);
	}
	else
		printf("%d %d\n", x, y - 45);

	return 0;
}
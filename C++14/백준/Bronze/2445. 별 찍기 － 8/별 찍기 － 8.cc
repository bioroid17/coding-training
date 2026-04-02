#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	for (int line = 1, blank = 2 * n - 2, star = 1; line <= n; line++, blank -= 2, star++)
	{
		for (int s = 1; s <= star; s++)
			printf("*");
		for (int b = 1; b <= blank; b++)
			printf(" ");
		for (int s = 1; s <= star; s++)
			printf("*");
		printf("\n");
	}
	for (int line = 1, blank = 2, star = n; line <= n; line++, blank += 2, star--)
	{
		for (int s = 1; s < star; s++)
			printf("*");
		for (int b = 1; b <= blank; b++)
			printf(" ");
		for (int s = 1; s < star; s++)
			printf("*");
		printf("\n");
	}
	return 0;
}
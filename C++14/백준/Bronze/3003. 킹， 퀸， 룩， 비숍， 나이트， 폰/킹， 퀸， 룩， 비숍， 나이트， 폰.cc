#include <stdio.h>
int main(void)
{
	int piece[6];
	for (int i = 0; i < 6; i++)
		scanf("%d", &piece[i]);
	printf("%d %d %d %d %d %d", 1 - piece[0], 1 - piece[1], 2 - piece[2], 2 - piece[3], 2 - piece[4], 8 - piece[5]);
	return 0;
}
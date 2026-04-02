#include <stdio.h>
#include <string.h>
char square[15][16];
int r, c, cnt = 0;
int hopscotch(int a, int b)
{
	int route[15][15];
	route[0][0] = 1;
	for (int i = a + 1; i < r; i++)
	{
		for (int j = b + 1; j < c; j++)
		{
			if (square[a][b] != square[i][j])
			{
				route[i][j] = 1;
				hopscotch(i, j);
			}
		}
	}
	if (a + 1 == r && b + 1 == c)
		cnt++;
	route[a][b] = 0;
	return cnt;
}
int main(void)
{
	scanf("%d %d", &r, &c);
	for (int i = 0; i < r; i++)
		scanf("%s", square[i]);
	printf("%d\n", hopscotch(0, 0));
	return 0;
}
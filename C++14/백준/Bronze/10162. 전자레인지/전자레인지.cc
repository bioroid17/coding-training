#include <stdio.h>
int main(void)
{
	int sec, a, b, c;
	scanf("%d", &sec);
	a = sec / 300;
	sec %= 300;
	b = sec / 60;
	sec %= 60;
	c = sec / 10;
	sec %= 10;
	if (sec == 0)
		printf("%d %d %d\n", a, b, c);
	else
		printf("-1\n");
	return 0;
}
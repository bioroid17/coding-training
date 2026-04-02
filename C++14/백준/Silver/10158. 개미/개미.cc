#include <stdio.h>
#include <math.h>
int main(void)
{
	int w, h, p, q, x, y, a, b, t;
	scanf("%d %d", &w, &h);
	a = 2 * w, b = 2 * h;
	scanf("%d %d", &p, &q);
	scanf("%d", &t);
	x = p + t%a, y = q + t%b;
	if (x > w)
		x = abs(a - x);
	if (y > h)
		y = abs(b - y);
	printf("%d %d\n", x, y);
}
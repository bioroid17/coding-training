#include <stdio.h>
int a, b, num[1000000] = { 0, };
int main(void)
{
	
	scanf("%d %d", &a, &b);
	num[0] = 1, num[1] = 1;
	for (int i = 2; i <= b; i++)
	{
		for (int j = i * 2; j <= b; j += i)
			num[j] = 1;
	}
	for (int i = a; i <= b; i++)
	{
		if (num[i] == 0)
			printf("%d\n", i);
	}
	return 0;
}
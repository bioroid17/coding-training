#include <stdio.h>
int main(void)
{
	int n, k, coin[10], num = 0;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++)
		scanf("%d", &coin[i]);
	for (int i = n - 1; i >= 0; i--)
	{
		num = num + k / coin[i];
		k = k%coin[i];
	}
	printf("%d\n", num);
	return 0;
}
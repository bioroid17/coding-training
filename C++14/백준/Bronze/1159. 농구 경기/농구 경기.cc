#include <stdio.h>
int main(void)
{
	int n, array[26] = { 0, }, cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char name[31];
		scanf("%s", name);
		array[name[0] - 97]++;
	}
	for (int i = 0; i < 26; i++)
	{
		if (array[i] >= 5)
		{
			printf("%c", i + 97);
			cnt++;
		}
	}
	if (cnt == 0)
		printf("PREDAJA\n");
	printf("\n");
	return 0;
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n, result = 0;
	char str[101];
	scanf("%d", &n);
	scanf("%s", str);
	for (int i = 0;i < strlen(str); i++)
		result = result + (str[i] - '0');
	printf("%d\n", result);
	return 0;
}
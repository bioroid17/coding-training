#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[4], b[4];
	scanf("%s %s", a, b);
	char temp;
	temp = a[0], a[0] = a[2], a[2] = temp;
	temp = b[0], b[0] = b[2], b[2] = temp;
	if (a[0] > b[0])
		printf("%s\n", a);
	else if (a[0] < b[0])
		printf("%s\n", b);
	else
	{
		if (a[1] > b[1])
			printf("%s\n", a);
		else if (a[1] < b[1])
			printf("%s\n", b);
		else
		{
			if (a[2] > b[2])
				printf("%s\n", a);
			else
				printf("%s\n", b);
		}
	}
	return 0;
}
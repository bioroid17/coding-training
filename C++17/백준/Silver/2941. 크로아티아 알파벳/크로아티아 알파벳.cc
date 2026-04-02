#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101];
	int n = 0, result = 0;
	scanf("%s", str);
	while (n != strlen(str))
	{
		if (str[n] == 'c' && str[n + 1] == '=')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 'c' && str[n + 1] == '-')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 'd' && str[n + 1] == 'z' && str[n + 2] == '=')
		{
			result++;
			n += 3;
		}
		else if (str[n] == 'd' && str[n + 1] == '-')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 'l' && str[n + 1] == 'j')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 'n' && str[n + 1] == 'j')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 's' && str[n + 1] == '=')
		{
			result++;
			n += 2;
		}
		else if (str[n] == 'z' && str[n + 1] == '=')
		{
			result++;
			n += 2;
		}
		else
		{
			result++;
			n++;
		}
	}
	printf("%d\n", result);
	return 0;
}
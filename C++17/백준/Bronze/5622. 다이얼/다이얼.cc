#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[101];
	int n = 0, result = 0;
	scanf("%s", str);
	while (n != strlen(str))
	{
		if (str[n] == 'A' || str[n] == 'B' || str[n] == 'C')
			result += 3;
		if (str[n] == 'D' || str[n] == 'E' || str[n] == 'F')
			result += 4;
		if (str[n] == 'G' || str[n] == 'H' || str[n] == 'I')
			result += 5;
		if (str[n] == 'J' || str[n] == 'K' || str[n] == 'L')
			result += 6;
		if (str[n] == 'M' || str[n] == 'N' || str[n] == 'O')
			result += 7;
		if (str[n] == 'P' || str[n] == 'Q' || str[n] == 'R' || str[n] == 'S')
			result += 8;
		if (str[n] == 'T' || str[n] == 'U' || str[n] == 'V')
			result += 9;
		if (str[n] == 'W' || str[n] == 'X' || str[n] == 'Y' || str[n] == 'Z')
			result += 10;
		n++;
	}
	printf("%d\n", result);
	return 0;
}
#include <stdio.h>
#include <string.h>
int main(void)
{
	char num1[8], num2[8];
	int n1 = 0, n2 = 0;
	scanf("%s %s", num1, num2);
	for (int i = 0; i < strlen(num1); i++)
	{
		n1 *= 10;
		if (num1[i] == '6')
			num1[i] = '5';
		n1 = n1 + num1[i] - 48;
	}
	for (int i = 0; i < strlen(num2); i++)
	{
		n2 *= 10;
		if (num2[i] == '6')
			num2[i] = '5';
		n2 = n2 + num2[i] - 48;
	}
	printf("%d ", n1 + n2);
	n1 = 0, n2 = 0;
	for (int i = 0; i < strlen(num1); i++)
	{
		n1 *= 10;
		if (num1[i] == '5')
			num1[i] = '6';
		n1 = n1 + num1[i] - 48;
	}
	for (int i = 0; i < strlen(num2); i++)
	{
		n2 *= 10;
		if (num2[i] == '5')
			num2[i] = '6';
		n2 = n2 + num2[i] - 48;
	}
	printf("%d\n", n1 + n2);
	return 0;
}
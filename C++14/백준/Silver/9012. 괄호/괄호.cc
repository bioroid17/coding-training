#include <stdio.h>
#include <string.h>
int top = 0;
char input[51];
void push(char c)
{
	input[top] = c;
	top++;
}

void pop(void)
{
	top--;
}

bool empty(void)
{
	if (top == 0)
		return true;
	else
		return false;
}

int main(void)
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		top = 0;
		char par[51];
		scanf("%s", par);
		for (int i = 0; i < strlen(par); i++)
		{
			if (empty())
				push(par[i]);
			else
			{
				if (input[top - 1] == '(' && par[i] == ')')
					pop();
				else
					push(par[i]);
			}
		}
		if (empty())
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
#include <stdio.h>
#include <string.h>
int queue[10000];
int top = 0;
void push(void)
{
	int x;
	scanf("%d", &x);
	queue[top] = x;
	top++;
}
void pop(void)
{
	if (top != 0)
	{
		printf("%d\n", queue[0]);
		for (int i = 0; i < top; i++)
			queue[i] = queue[i + 1];
		top--;
	}
	else
		printf("-1\n");
}
void size(void)
{
	printf("%d\n", top);
}
void empty(void)
{
	if (top == 0)
		printf("1\n");
	else
		printf("0\n");
}
void front(void)
{
	if (top != 0)
		printf("%d\n", queue[0]);
	else
		printf("-1\n");
}
void back(void)
{
	if (top != 0)
		printf("%d\n", queue[top - 1]);
	else
		printf("-1\n");
}
int main(void)
{
	int num;
	char cmd[6];
	scanf("%d", &num);
	while (num--)
	{
		scanf("%s", cmd);

		if (strcmp(cmd, "push") == 0)
			push();
		if (strcmp(cmd, "pop") == 0)
			pop();
		if (strcmp(cmd, "size") == 0)
			size();
		if (strcmp(cmd, "empty") == 0)
			empty();
		if (strcmp(cmd, "front") == 0)
			front();
		if (strcmp(cmd, "back") == 0)
			back();
	}
	return 0;
}
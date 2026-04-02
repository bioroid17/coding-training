#include <stdio.h>
#include <string.h>
int stack[10000];
int stack_top = 0;
void push(void)
{
	int x;
	scanf("%d", &x);
	stack[stack_top] = x;
	stack_top++;
}
void pop(void)
{
	if (stack_top == 0)
		printf("-1\n");
	else
	{
		stack_top--;
		printf("%d\n", stack[stack_top]);
	}
}
void size(void)
{
	printf("%d\n", stack_top);
}
void empty(void)
{
	if (stack_top == 0)
		printf("1\n");
	else
		printf("0\n");
}
void top(void)
{
	if (stack_top == 0)
		printf("-1\n");
	else
		printf("%d\n", stack[stack_top - 1]);
}
int main(void)
{
	int num;
	scanf("%d", &num);
	while(num--)
	{
		char command[6];
		int x;
		scanf("%s", command);
		if (strcmp(command, "push") == 0)
			push();
		if (strcmp(command, "pop") == 0)
			pop();
		if (strcmp(command, "size") == 0)
			size();
		if (strcmp(command, "empty") == 0)
			empty();
		if (strcmp(command, "top") == 0)
			top();
	}
	return 0;
}
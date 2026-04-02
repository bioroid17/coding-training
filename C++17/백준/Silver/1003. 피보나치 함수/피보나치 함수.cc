#include <stdio.h>

int main(void)
{
    int testcases, num;
    int fibo[41];
    fibo[0] = 1, fibo[1] = 1;
    for(int i = 2 ; i < 41; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    scanf("%d", &testcases);
    while(testcases--)
    {
        scanf("%d", &num);
        if(num == 0)
            printf("1 0\n");
        else if(num == 1)
            printf("0 1\n");
        else
            printf("%d %d\n", fibo[num - 2], fibo[num - 1]);
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
struct person{
    double x;
    double y;
    double r;
};
int main(void)
{
    int testcases;
    scanf("%d", &testcases);
    while(testcases--)
    {
        struct person cho, baek;
        scanf("%lf %lf %lf %lf %lf %lf", &cho.x, &cho.y, &cho.r, &baek.x, &baek.y, &baek.r);
        if(cho.x == baek.x && cho.y == baek.y && cho.r == baek.r)
            printf("-1\n");
        else if(sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) > cho.r + baek.r || sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) < fabs(cho.r - baek.r))
            printf("0\n");
        else if(sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) == cho.r + baek.r || sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) == fabs(cho.r - baek.r))
            printf("1\n");
        else if(sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) > fabs(cho.r - baek.r) && sqrt(pow(cho.x - baek.x, 2) + pow(cho.y - baek.y, 2)) < cho.r + baek.r)
            printf("2\n");
    }
    return 0;
}
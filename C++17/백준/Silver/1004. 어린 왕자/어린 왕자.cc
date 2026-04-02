#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct coordinate{
    double x;
    double y;
    double radius;
};
int main(void)
{
    int testcases, num_planet;
    scanf("%d", &testcases);
    while(testcases--)
    {
        int count = 0;
        struct coordinate start, end;
        struct coordinate planet[50];
        scanf("%lf %lf %lf %lf", &start.x, &start.y, &end.x, &end.y);
        scanf("%d", &num_planet);
        for(int i = 0; i < num_planet; i++)
        {
            scanf("%lf %lf %lf", &planet[i].x, &planet[i].y, &planet[i].radius);
            if(sqrt((planet[i].x - start.x) * (planet[i].x - start.x) + (planet[i].y - start.y) * (planet[i].y - start.y)) < planet[i].radius
                && sqrt((planet[i].x - end.x) * (planet[i].x - end.x) + (planet[i].y - end.y) * (planet[i].y - end.y)) > planet[i].radius)
                count++;
            else if(sqrt((planet[i].x - start.x) * (planet[i].x - start.x) + (planet[i].y - start.y) * (planet[i].y - start.y)) > planet[i].radius
                && sqrt((planet[i].x - end.x) * (planet[i].x - end.x) + (planet[i].y - end.y) * (planet[i].y - end.y)) < planet[i].radius)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
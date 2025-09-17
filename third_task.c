#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    // declare variables
    int a,b,c;
    float x1,x2;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    printf("c:");
    scanf("%d",&c);

    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);

    printf("x1: %f",x1);
    printf("x2: %f",x2);

    return 0;
}
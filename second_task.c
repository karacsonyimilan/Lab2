#include <stdio.h>
#include <math.h>

int main()
{
    // declare variables<-- These are comments, you can remove them if you want to
    int x1,x2,y1,y2;

    printf("x1:");
    scanf("%d",&x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("x2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);

    float tav=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    printf("tav:%f",tav);

    // get user input

    // calculate the length

    // print the result

    return 0;
}
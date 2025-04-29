#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    printf("enter any decimal value between 0 and 1: ");
    scanf("%f", &x);
    printf("the value of sinex for %f given is %f",x,sin(x));
    return 0;
}
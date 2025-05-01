//Write a function that prints a table of values for sine and cosine between (0, 1)
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    double interval;
    printf("SINE TABLE\n");
    for(i=0; i<=10; i++)
    {
        interval=(i/10.0);
        printf("sine(%0.2f) --> %f\n",interval,sin(interval));
    }

    printf("\n");
    printf("COSINE TABLE\n");
    for (i=0;i<=10;i++)
    {
        interval=(i/10.0);
        printf("cosine(%0.2f) --> %f\n",interval,cos(interval));
    }
    return 0;
}
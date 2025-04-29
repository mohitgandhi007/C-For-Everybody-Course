#include <stdio.h>

#define PI 3.14159

int main(void)
{
    int radius;
    float volume;
    printf("Please enter the radius of the sphere in meters: ");
    scanf("%d",&radius );
    volume= 4*PI*radius*radius*radius/3.0;
    printf("the radius of the sphere is %d meters and its volume is %f cubic meters\n", radius, volume);
    return 0;
}
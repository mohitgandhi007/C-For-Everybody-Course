#include <stdio.h>
int main(void)
{
    int repeat =0;
    printf("How much do your love your partner in the scale of 1-10: ");
    scanf("%d", &repeat);
    printf("i love her very ");
    while (repeat>0)
    {printf(" very");
        repeat=repeat-1;
    };
    printf(" much");
    return 0;
}
#include <stdio.h>

void main()
{
    struct lol
    {
        int price;
    } los[20];

    los[1].price = 1;
    los[2].price = 1;
    los[3].price = 1;
    los[4].price = 1;

    int los_add = los[1].price + los[2].price + los[3].price + los[4].price;
    

    printf("%ld", los_add);
}
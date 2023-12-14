#include <stdio.h>
int main(void)
{
    int x=1, y=2, z=3;
    double f=0.0;

    printf("%d\n", 3/5);
    printf("%d\n", 3%5);
    y *= x;
    x++;
    printf("%f\n", 2.0/4);

    x = 12.3;
    f = (double)x;

    printf("%d\n", 10 > 3);
    printf("%d\n", (10>3) && (1>10));
    printf("%d\n", (10>3) || (1>10));

    x = y = z = 10;

    return 0;

}

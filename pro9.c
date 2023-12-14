#include <stdio.h>
int main(void)
{
    int a, b, c;
    double d;
     /*ae=c, ac=b, bc=a  b:c=a:d */
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%d", &a);

    printf("지팡이 그림자의 길이를 입력하시오: "); 
    scanf("%d", &b);

    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%d", &c);

    d = (a * c) / b;

    printf("피라미드의 높이는 %.2f입니다. ", d);

    return 0;
} 

#include<stdio.h>
int main()
{
    double a1, a2, b1, b2, c1, c2, x, y;
    printf(" The number of a1 is : ");
    scanf("%lf,",&a1);
    printf(" The number of a2 is : ");
    scanf("%lf,",&a2);
    printf(" The number of b1 is : ");
    scanf("%lf,",&b1);
    printf(" The number of b2 is : ");
    scanf("%lf,",&b2);
    printf(" The number of c1 is : ");
    scanf("%lf,",&c1);
    printf(" The number of c2 is : ");
    scanf("%lf,",&c2);

    x=(b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y=(a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("x = %0.2lf, y = %0.2lf\n\n",x,y);

    return 0;

}

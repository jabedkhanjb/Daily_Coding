#include<stdio.h>
int main()
{
    double x,y,x_plus_y,x_minus_y;
    //given
    printf("Enter the value of x + y : ");
    scanf("%lf",&x_plus_y);

    printf("Enter another value of x - y : ");
    scanf("%lf",&x_minus_y);

    x=(x_plus_y + x_minus_y) / 2;
    printf("\n\nThe Value of x is %0.2lf: \n",x);

    y=(x_plus_y - x_minus_y) / 2;
    printf("The Value of y is %0.2lf: \n",y);

    printf("\n\n\n\t\t\tjabedkhan.jb\n\n");

    return 0;
}

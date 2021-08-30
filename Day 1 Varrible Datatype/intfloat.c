#include<stdio.h>
/*i assigned b value as a float, & assigned a = b, where would like to
print a as a int type so i can use it as a=(int)b*/
int main()
{
    int a;
    double b;
    b=10.65;
    a=(int) b;

    printf("Here float value b is %.2f\n", b);
    printf("The int value is %d \nwhich was assigned as a float value %.2f",a,b);

    return 0;
}

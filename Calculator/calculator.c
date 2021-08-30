#include<stdio.h>
int main()
{
    float a,b,c;
    char sign;
    printf("\n\n*****************************\n\n");
    printf("Input a number: ");
    scanf("%f",&a);
    printf("Input another number: ");
    scanf("%f",&b);

    printf("\nInput a sign: +,-,*,/ ");
    printf("\nInsert Now: ");
    scanf(" %c",&sign);

    if(sign=='+')
    {
        printf("\nYou have inputed + for the addition between %.2f and %.2f\n\n",a,b);

        c=a+b;
    printf("%.2f + %.2f = %.2f\n",a,b,c);

    }
    else if(sign=='-')
    {
        printf("\nYou have inputed - for the subtraction between %f and %f\n\n",a,b);

        c=a-b;
    printf("%.2f - %.2f = %.2f\n",a,b,c);
    }

    else if(sign=='*')
    {
        printf("\nYou have inputed * for the multiplication between %f and %f\n\n",a,b);

        c=a*b;
    printf("%.2f * %.2f = %.2f\n",a,b,c);

    }

    else if(sign=='/')
    {
        printf("\nYou have inputed / for the division between %f and %f\n\n",a,b);

        c=a/b;
    printf("%.2f / %.2f = %.2f\n",a,b,c);

    }


    printf("\n\n*****************************\n\n");

    return 0;
}

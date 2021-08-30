#include<stdio.h>
int main()
{
    printf("\n***************************\n\n");
    int number, remainder,i;

    printf("Please insert a number: ");
    scanf("%d",&number);

    remainder=number%2;

    if(remainder==0)
    {
        printf("%d number is a Even Number.",number);

    }
    else
    {
        printf("%d number is Odd Number.",number);

    }

    return 0;
}

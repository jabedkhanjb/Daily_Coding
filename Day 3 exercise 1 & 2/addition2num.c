#include<stdio.h>
int main()
{
    int a,b,result;
    printf("\n******************************\n\n");

    printf("Input a number: ");
    scanf("%d,",&a);
    printf("Input another number: ");
    scanf("%d",&b);

    result=a+b;
    printf("\nThe addition of %d and %d are together %d",a,b,result);

    printf("\n\n******************************\n\n");


    return 0;
}

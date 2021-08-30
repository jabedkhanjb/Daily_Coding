#include<stdio.h>
int main()
{
    printf("\n\n****************************\n\n");
     int number;
     printf("Input a number: ");
     scanf("%d",&number);
     if(number>10)
     {
         printf("%d is greater than 10\n",number);
     }
     else {
        printf("%d is less than 10\n",number);
     }

    printf("\n****************************\n\n");
     int n;
     printf("Input a number for check is it positive, negative or zero.\n");
     scanf("%d",&n);

        if(n < 0) {
    printf("The number is negative\n");
    }
        else if (n > 0) {
    printf("The number is positive\n");
    }
        else {
    printf("The number is zero!\n");
    }
    printf("\n****************************\n\n");

    return 0;
}

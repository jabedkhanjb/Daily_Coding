#include<stdio.h>
int main()
{
    //loan amount = L
    //interest rate = I
    //number of years = Y
    //total amount = T
    //monthly amount = M
    //Interest Amount = IA
    double L,I,Y,T,M,IA;
    printf("\n\n***************************************\n\n");
    printf("Enter the Loan Amount: ");
    scanf("%lf",&L);
    printf("Enter the Interest Amount: "); //percentage
    scanf("%lf",&I);
    printf("Enter the Number of Years: ");
    scanf("%lf",&Y);

    //total amount has given below
    T=L+(L*I*Y)/100;
    //monthly amount is:
    M=T/(Y*12);

    printf("\n\nAfter %.0lf Year/s later You have to pay : %0.2lf Taka\n",Y,T);
    printf("Monthly Amount is : %0.2lf Taka\n",M);
    IA= L*(Y*I)/100;
    printf("With %.0lf Year/s Interest rate your Interest amount is %0.2lf Taka.",Y,IA);
    printf("\n\n***************************************\n\n");
    return 0;

}

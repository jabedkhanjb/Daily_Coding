#include<stdio.h>
int main()
{
    //loan amount = L
    //interest rate = I
    //number of years = Y
    //total amount = T
    //monthly amount = M
    //Interest Amount = IA

    //yearly amount = YA
    //Yearly years = YY
    //yearly total = YT
    double YA,YY,YT;
    double L,I,Y,T,M,IA;
    char name;
    printf("\n\n***************************************\n\n");
    printf("Yearly Base or monthly base ?\n");
    scanf(" %c",&name);
    if(name=='Y' || name=='y')
    {
        printf("1 Year Interest is 7.5\n");
        printf("2 Years Interest is 9\n");
        printf("3 Years Interest is 10.5\n");
        printf("4 Years Interest is 12\n");
        printf("5 Years Interest is 13.5\n");
        printf("\nAccording to the given list,\nHow many years do you want ?\n");

        printf("I need ");
        scanf(" %lf",&YY);
       while(YY==1)
        {
            printf("Your %0.0lf years Interest rate is 7.5\n",YY);
            printf("Now, Enter the loan amount: ");
            scanf("%lf",&YA);
            YT = YA + YA*YY*7.5/100;
            printf("%0.0lf Year later you have to pay total %0.2lf Money\n",YY,YT);

        }
        while(YY==2)
        {
            printf("Your %0.0lf years Interest rate is 9\n",YY);
            printf("Now, Enter the loan amount: ");
            scanf("%lf",&YA);
            YT = YA + YA*YY*9/100;
            printf("%0.0lf Year later you have to pay total %0.2lf Money\n",YY,YT);

        }
        while(YY==3)
        {
            printf("Your %0.0lf years Interest rate is 10.5\n",YY);
            printf("Now, Enter the loan amount: ");
            scanf("%lf",&YA);
            YT = YA + YA*YY*10.5/100;
            printf("%0.0lf Year later you have to pay total %0.2lf Money\n",YY,YT);

        }
        while(YY==4)
        {
            printf("Your %0.0lf years Interest rate is 12\n",YY);
            printf("Now, Enter the loan amount: ");
            scanf("%lf",&YA);
            YT = YA + YA*YY*12/100;
            printf("%0.0lf Year later you have to pay total %0.2lf Money\n",YY,YT);

        }
        while(YY==5)
        {
            printf("Your %0.0lf years Interest rate is 13.5\n",YY);
            printf("Now, Enter the loan amount: ");
            scanf("%lf",&YA);
            YT = YA + YA*YY*13.5/100;
            printf("%0.0lf Year later you have to pay total %0.2lf Money",YY,YT);

        }




    }
    else if (name=='M' || name=='m')
    {
    printf("Enter the Loan Amount: ");
    scanf(" %lf",&L);
    printf("Enter the Interest Amount: "); //percentage
    scanf(" %lf",&I);
    printf("Enter the Number of Years: ");
    scanf(" %lf",&Y);

    //total amount has given below
    T=L+(L*I*Y)/100;
    //monthly amount is:
    M=T/(Y*12);

    printf("\n\nAfter %.0lf Year/s later You have to pay : %0.2lf Taka\n",Y,T);
    printf("Monthly Amount is : %0.2lf Taka\n",M);
    IA= L*(Y*I)/100;
    printf("With %.0lf Year/s Interest rate your Interest amount is %0.2lf Taka.",Y,IA);
    printf("\n\n***************************************\n\n");
    }
    return 0;

}

#include<stdio.h>
int main()
{
    //Customer = C
    //FSIB Savings account Interest = I
    //Half of year interest = HY (Half Year)
    //One Year = OYprintf("\t\t\t\t\t*                            *\n");printf("\t\t\t\t\t*                            *\n");
    double C,I,HY,OY;
    char YES_NO;
    printf("\n\n");
    printf("\t\t\t*******************************************************\n");
    printf("\t\t\t*                                                     *\n");
    printf("\t\t\t*        WELCOME TO FIRST SECURITY ISLAMI BANK        *\n");
    printf("\t\t\t*                                                     *\n");
    printf("\t\t\t*******************************************************\n");

    printf("\n");
    printf("\n\t\t\tFSIB Bank Savings Account Profit Policy.\n");
    printf("\n\t\t\tWe have 6 Months & 1 Year Profit Policy.");
    printf("\n\t\t\t6 Months profit rate is 4.5 Percentage.");
    printf("\n\t\t\tCustomer can withdraw their profit every 6 months later.\n");

    printf("\n\t\t\t1 Year profit rate is 9 Percentage.");
    printf("\n\t\t\tCustomer can withdraw their profit every 1 year later.\n");

    printf("\n\t\t\tWould like to Deposit in our FSIB Bank ?");
    printf("\n\t\t\tFor Deposit PRESS 'Y'   For Exit PRESS 'N'  ");
    printf("\n\n\t\t\t\t\tPRESS: ");
    scanf(" %c",&YES_NO);
    if(YES_NO=='Y' || YES_NO=='y')
    {
            printf("\t\t\tTell us Your Amount: ");
            scanf("%lf",&C);
            printf("\n\n\t\t\t6 Months or 1 Year Profit Policy ?\n");
            printf("\t\t\t\You want ");
            scanf("%lf",&I);
            printf("\n\t\t\tYour Profit rate is 4.5 percentage in each 6 months.");

            HY=C*(4.5/100);
            printf("\n\n\t\t\t6 Months later your Profit is : %0.2lf",HY);
    }

    else if(YES_NO=='N' || YES_NO=='n')
    {
         printf("\n\n");
        printf("\t\t\t\t\t******************************\n");
        printf("\t\t\t\t\t*                            *\n");
        printf("\t\t\t\t\t*      Have a Nice Day       *\n");
        printf("\t\t\t\t\t*                            *\n");
        printf("\t\t\t\t\t******************************\n");
    }



    printf("\t\t\t\t\tCODED BY JABEDKHAN.JB");


    return 0;
}

#include<stdio.h>
int main()
{
    // 1 + 2 + 3 + … + 998 + 999 + 1000 = ???
    int n, sum;
    printf("Input a number\nand see its summation : ");
    scanf("%d",&n);
    sum = (n * (n + 1)) / 2;
    printf("Total Summation of %d is %d\n",n,sum);

    //instead of this rule we can use loop
    //i recommend "for loop" in this term
    int i;
    printf("\nNow, we will see its summation using for loop\nAnswer will same as before");
    printf("\nInput a number : ");
    scanf("%d",&n);
    for(i=1, sum=0; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("The summation of %d is %d \n",n,sum);
    return 0;
}

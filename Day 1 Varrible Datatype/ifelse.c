#include<stdio.h>
int main()
{
    int n;
    printf("Input a number as a positive or negative: ");
    scanf("%d",&n);

    if(n>=0)
    {
        printf("\n%d number is Positive.\n",n);

    }
    else{
        printf("\n%d number is negative.\n",n);
    }

    printf("\n*****************************\n");

    int m;
    printf("Input a another number as a positive or negative: ");
    scanf("%d",&m);
    if(m<0)
    {
        printf("\n%d number is a negative.\n",m);
    }
    else{
        printf("\n%d number is a positive.\n",m);
    }

    printf("\n***************************\n");

    int p;
    printf("Input one more number as a positive or negative: ");
    scanf("%d",&p);
    if(p<0){
        printf("\n%d number is negative.\n",p);
    }
    else if (p > 0) {
    printf("\n%d number is positive.\n",p);
    }
    else if (p == 0) {
    printf("\n%d number is zero!\n",p);
    }

    return 0;
}

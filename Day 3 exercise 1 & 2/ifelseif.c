#include<stdio.h>
int main()
{
    int n;
    printf("Insert a number: ");
    scanf("%d",&n);
    if(n<=10){
        printf("%d is less than 10\n",n);
    }
    else if(n=10){
        printf("%d is Equal 10\n",n);
    }
    else if(n>=10){
        printf("%d is greater than 10\n",n);
    }
    return 0;
}

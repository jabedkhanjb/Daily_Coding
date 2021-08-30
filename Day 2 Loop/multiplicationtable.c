#include<stdio.h>
int main()
{
    int n,i,result;
    n=9;
    i=1;
    while(i<=10)
    {
        result=n*i;
        printf("%d X %d = %d\n",n,i,result);
        i++;
    }
    return 0;
}

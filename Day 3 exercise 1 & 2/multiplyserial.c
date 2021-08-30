#include<stdio.h>
int main()
{
    int n,i,r; //r is used 4 result
    char sign;
    n=5;
    i=1;
    sign='X';
    while(i<=10)
    {
        r=n*i;
        printf("%d %c %d = %d\n",n,sign,i,r);
        i++;

    }
    return 0;
}

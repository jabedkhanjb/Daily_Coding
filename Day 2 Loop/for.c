#include<stdio.h>
int main()
{
    int n,i,result;
    n=8;
    for(i=1;i<=10;i++)
    {
        result=n*i;
        printf("%d X %d = %d\n",n,i,n*i);
    }



    printf("\n\n********************************\n\n");

    int m,ii,rresult;
    m=7;
    ii=1; /* here we already assigned i's value.
            so it's not necessary to insert i's value
            inside its loop. but we have to keep space
            using semicolon ; inside the loop.
         */
    for(;ii<=10;ii++)
    {
        rresult=m*ii;
        printf("%d X %d = %d\n",m,ii,m*ii);
    }

    printf("\n\n********************************\n\n");

    int p,w,x;
    p=6,w=1;
    for(;;)
    {
        x=p*w;
        printf("%d X %d = %d\n",p,w,x);
        w++;
        if(w >10 ){
            break;
        }
    }
    return 0;
}

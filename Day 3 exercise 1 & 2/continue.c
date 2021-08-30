#include<stdio.h>
int main()
{
    int n=0;
    while(n<50){
            n++;
    if(n%2==0){
        continue;
    }
        printf("%d\n",n);

    }

}

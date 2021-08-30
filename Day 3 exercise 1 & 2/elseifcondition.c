#include<stdio.h>
int main()
{
    int a;
    printf("\n\n**********************************\n\n");
    printf("Input a number: ");
    scanf("%d",&a);
//here, we use if for checking all
//if we use else, there shouldn't be any condition.
    if(a>0){
        printf("%d is a Positive number.",a);
    }

    //if(a<0)
    else if(a<0){
        printf("%d is a Negative number.",a);
    }


   // else if(a==0)
    else{
        printf("%d is Zero.",a);
    }
    printf("\n\n**********************************\n\n");

    return 0;
}

#include<stdio.h>
int main()
{

    int a,remainder;
    printf("\n\n**********************************\n\n");

    printf("Input a number: ");
    scanf("%d",&a);

    remainder=a%2;

    if(remainder == 0){
    printf("%d is Even Number.",a);
    }
    else {
    printf("%d is Odd Number.",a);
    }

    printf("\n\n**********************************\n\n");

    printf("we can do it without using remainder.\n");
    printf("Do you wanna see ?\n\n\t\t say Y, or N:---- ");

    char name;
    scanf(" %c",&name);
    printf("\n\t\t\tYou said : %c",name);

    if(name=='Y' || name=='y'){
        int m;
        printf("\nInput a Number: ");
        scanf("%d",&m);

        if(m%2==0){
            printf("\n%d is a Even Number.",m);
        }
        else{
            printf("\n%d is a Odd Number.",m);
        }
    }
    else if(name=='N' || name=='n'){
        printf("\n\nOk Sir, Thanks for your patience.");
    }
    printf("\n\n**********************************\n\n");



    return 0;

}

#include<stdio.h>
int main()
{
    int num1,num2,value;
    char sign;
    printf("\n******************************\n\n");

    printf("Input a value: ");
    scanf("%d",&num1);
    printf("Input another value: ");
    scanf("%d",&num2);

    value=num1+num2;
    sign='+';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value=num1-num2;
    sign='-';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value=num1*num2;
    sign='*';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    value=num1/num2;
    sign='/';
    printf("%d %c %d = %d\n",num1,sign,num2,value);

    printf("\n\n******************************\n\n");

    return 0;
}


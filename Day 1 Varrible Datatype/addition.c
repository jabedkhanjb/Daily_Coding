#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter another number: ");
    scanf("%d",&num2);

    printf("%d+%d=%d\n",num1,num2, num1+num2);
    printf("%d-%d=%d\n",num1,num2, num1-num2);
    printf("%d*%d=%d\n",num1,num2, num1*num2);
    printf("%d/%d=%d\n",num1,num2, num1/num2);
    return 0;
}

#include<stdio.h>
int main()
{
    printf("\n****************************************\n\n");
    char ch;
    printf("Please press a letter from your keyboard: ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        /* here we use && operator, which is called by
        AND Operator, whenever its needed in condition
        then it must have been being two condition in
        its both side, for the && input have to pass the
        condition then we can get the result.

        another condition is we can use ||, this is
        called OR Operator,, in this operator if our
        condition can pass any one the condition,
        then we get the result.....
        Thank you so much. */
    {
        printf("\n\n%c is lower case\n",ch);
    }
    if (ch>='A' && ch<='Z')
    /* if we use if condition for all,
    it will check the all condition for the sake of
    if condition, so if we have to reduce this complexity.
    so it's better to use else if condition then it will
    check all condition until get its particular answer.
    */
    {
        printf("\n%c is upper case\n",ch);
    }
    printf("\n****************************************\n\n");
    return 0;
}

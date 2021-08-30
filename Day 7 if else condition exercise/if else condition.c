/*

#include<stdio.h>
int main()
{
    int n; //n for number
    printf("Enter a Number : ");
    scanf("%d",&n);

    if(n>10)
    {
        printf("\n\n%d is Large than 10.\n\n",n);
    }
    else if(n<10)
    {
        printf("\n\n%d is Less than 10.\n\n",n);
    }
    return 0;
}
*/

/*#include<stdio.h> //even odd checking
int main()
{
    int number, remainder;
    printf("\nEnter a Number : ");
    scanf("%d",&number);

    remainder = number % 2;
    if(remainder==0)
    {
        printf("\n\n%d is a Even Number\n\n",number);
    }
    else if(remainder != 0)
    {
        printf("\n\n%d is a Odd Number\n\n",number);
    }
    return 0;
}
*/

/*#include<stdio.h> //character upper case lower case checking
int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    {
        printf("\n\n%c is Lower Case.\n\n",ch);
    }
    if(ch>='A' && ch<='Z')
    {
        printf("\n\n%c is Upper Case.\n\n",ch);
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num=5;

    if(num>=1 || num<=10)
    {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
*/
#include<stdio.h>
int main() //char vowel consonant checking
{
    printf("\n\n\n\t\t\t*********************************\n");
    printf("\t\t\t*****      Programming      *****\n");
    printf("\t\t\t*********************************\n");

    printf("\n\n**********************************\n\n");
    char ch;
    printf("\tEnter a Character : ");
    scanf("%c",&ch);
    //vowel = a, e, i, o, u ......here || sign is OR gate ,and && is AND Gate
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("\n\n\t%c is Vowel.\n\n",ch);
    }
    else{
        printf("\n\n\t%c is Consonant.\n\n",ch);
    }
    printf("**********************************\n\n");
    return 0;

}

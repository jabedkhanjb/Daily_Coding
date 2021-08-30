#include<stdio.h>
int main()
{
    //we have clarify the vowel & consonant
    printf("\n**********************************\n\n");
    char ch;
    printf("Please insert a letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is Vowel.",ch);
    }
    else
    {
        printf("%c is consonant.",ch);
    }

    printf("\n\n**********************************\n");

    return 0;
}

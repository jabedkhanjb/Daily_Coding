#include<stdio.h>
int main()
{
    double celsius, fahrenheit;
    char temcf;
    //temcf means temperature in Celsius and Fahrenheit
    printf("\n***********************************************\n\n");
    printf("Check Temperature Celsius to Fahrenheit & Fahrenheit to Celsius.");
    printf("\n\nfor Celsius to Fahrenheit select C\nand Fahrenheit to Celsius select F");
    printf("\nSelect ");
    scanf(" %c",&temcf);
    if(temcf=='C' || temcf=='c')
    {
        printf("\nCelsius to Fahrenheit\n");
        printf("Enter temperature in celsius : ");
        scanf("%lf",&celsius);
        //now we have to input Fahrenheit law
        fahrenheit= (celsius * 1.8)+32;
        printf("The temperature in Fahrenheit is %0.2lf \n",fahrenheit);
    }
    else if(temcf=='F' || temcf=='f')
    {
        printf("\nFahrenheit to Celsius");
        printf("\nEnter temperature in Fahrenheit : ");
        scanf("%lf",&fahrenheit);
        //now we have to input Fahrenheit law
        celsius=((fahrenheit-32)/9)*5;
        printf("The temperature in Celsius is %0.2lf \n",celsius);
    }
    printf("\n******************jabedkhan.jb******************\n");
    return 0;

}

#include<stdio.h>
int main()
{
    double v,t,s,KM;
    printf("\n\n**********************************************\n\n");
    printf("Determining the distance after 2 seconds.\n");
    printf("\nVelocity in KM per hour : ");
    scanf("%lf",&v);
    printf("\nTime in 2 seconds");
    printf("\n\nYou have inputed,\n\tV = %.02lf KM per hour",v);
    printf("\n\tT = 2 Sec\n");
    printf("we Know,\n\tv = u+at");
    printf("\n\ts = ut+0.5a(t)2");
    printf("\nAfter simplification we got,\n\t\t s = 2tv");
    printf("\n\nhere,\n\tGiven, v = %0.2lf KM per hour\n\t\t t = 2 seconds\n",v);
    s=2*2*v/1000;

    printf("\nTwo seconds later distance will be %0.2lf KM per hour",s);

    printf("\n\n**********************************************");

    return 0;
}

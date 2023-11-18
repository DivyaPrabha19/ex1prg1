#include<stdio.h>
void main()
{
    int units;
    float amt;
    scanf("%d",&units);
    if(units<=100)
    {
        printf("There is no cost to units");
    }
    else if(units>100&&units<200)
    {
        amt=1.50*units;
        printf("The amount is %.2f ",amt);
    }
    else if(units<500&&units>200)
    {
        amt=3.00*units;
        printf("The amount is %.2f ",amt);
    }
    else
    {
        amt=6.60*units;
        printf("The amount is %.2f ",amt);
    }
}

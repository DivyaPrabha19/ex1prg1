#include<stdio.h>
void main()
{
 int num1,num2,num3,num,sum;
 printf("Enter three digit number");
 scanf("%d",&num);
 num1=num/100;
 num2=(num/10)%10;
 num3=num%10;
 sum=num1+num2+num3;
 printf("The sum of the digits of a number %d",sum);
 }
     


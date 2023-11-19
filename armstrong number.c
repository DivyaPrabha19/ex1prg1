#include<stdio.h>
#include<math.h>
void main()
{
   int a,num1,num2,num3,sum;
   printf("Enter three digit number:")
   scanf("%d",&a);
   num1=pow((a/100),3);
   num2=pow(((a/10)%10),3);
   num3=pow((a%10),3);
   sum=num1+num2+num3;
   printf("The ARMSTRONG NUMBER is %d",sum);
   
   
}


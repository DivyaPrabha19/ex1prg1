#include<stdio.h>
void main()
{
 int areaofsq,areaofrec,periofsq,periofrec,r,a,l,b;
 scanf("%d %d %d %d",&a,&r,&l,&b);
 areaofsq=a*a;
 periofsq=4*a;
 printf("The area and the perimeter of a square: %d and %d",areaofsq,periofsq);
 areaofrec=l*b;;
 periofrec=2*(l+b);
 printf("\nThe area and the perimeter of a rectangle: %d and %d",areaofrec,periofrec);
}

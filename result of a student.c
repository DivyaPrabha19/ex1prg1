#include<stdio.h>
void main()
{
    int tam,eng,maths,cs,phy,che,result;
    printf("ENTER THE MARKS WITHIN 100 ");
    scanf("%d %d %d %d %d %d",&tam,&eng,&maths,&cs,&phy,&che);
    result=tam+eng+maths+cs+phy+che;
    printf("RESULT OF A STUDENT IS %d",result);
    
}

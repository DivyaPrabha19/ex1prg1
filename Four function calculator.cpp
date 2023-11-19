#include<stdio.h>
void main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case '+':
        printf("addition is %d",a+b);
        break;
        case '-':
        printf("addition is %d",a-b);
        break;
        case '*':
        printf("addition is %d",a*b);
        break;
        case '/':
        printf("addition is %d",a/b);
        break;
        default:
        printf("Enter correct operator");
    
        
    }
    
}

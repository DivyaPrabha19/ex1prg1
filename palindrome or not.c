#include<stdio.h>
void main()
{
    int i,num,rev=0,ori,rem;
    scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(ori==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
}

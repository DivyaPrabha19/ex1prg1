#include<stdio.h>
void main()
{
    int i,range,count=0,sum=0,avg;
    scanf("%d",&range);
    for(i=1;i<=range;i+=2)
    {
        printf("The odd numbers are %d\n",i);
        sum=sum+i;
        count=count+1;
    }
    avg=sum/count;
    printf("The average is %d",avg);
}

#include<stdio.h>
 int main()
{
    int i,n,fact=1,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);
    }
    printf(" sum of series is:  %d\n",sum);
return 0;
}

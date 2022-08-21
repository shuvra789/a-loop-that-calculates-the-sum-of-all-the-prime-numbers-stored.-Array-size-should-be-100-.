#include<stdio.h>
#define size 100
int main(void)
{
    int prime[size];
    int i,j,k;
    int n=0;
    int sum=0;
    i=2;
    while(n!=100)
{
    k=0;
    for(j=2;j<=i;j++)
    {
        if (i%j==0)
            k++;
    }
    if(k==1)
    {
        prime[n]=i;
        n++;
    }
    i++;
        }
        for(int i=0; i<100;i++)
        {
            printf("prime[%d]=%d\n",i,prime[i]);
        }
        for(int i=0;i<100;i++)
        {
            sum+=prime[i];
        }
        printf("sum=%d",sum);
        return 0;
}

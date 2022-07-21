   #include<stdio.h>
int main()
{
    int n,sum=0;
    printf("\nEnter value of N=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            sum=sum+i*i;
    }
    printf("\nsum of square of Natural number=%d",sum);
    return 0;
}


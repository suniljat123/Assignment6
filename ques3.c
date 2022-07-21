   #include<stdio.h>
int main()
{
    int n,sum=0;
    printf("\nEnter value of N=");
    scanf("%d",&n);
    for(int i=1;i<=n;)
    {
            sum=sum+i;
            i=i+2;
    }
    printf("\nsum of Odd Natural number=%d",sum);
    return 0;
}


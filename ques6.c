   #include<stdio.h>
int main()
{
    int n,sum=1;
    printf("\nEnter Number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
            sum=sum*i;
    printf("\nFactorial of %d=%d",n,sum);
    return 0;
}


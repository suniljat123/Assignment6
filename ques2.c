   #include<stdio.h>
int main()
{
    int n,sum=0;
    printf("\nEnter value of N=");
    scanf("%d",&n);
    for(int i=2;i<=n*2;)
    {
            sum=sum+i;
            i=i+2;
    }
    printf("\nsum of Even Natural number=%d",sum);
    return 0;
}


    #include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter Number=");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("\n%d is not a Prime number",n);
            break;
        }
    }
    if(i==n)
         printf("\n%d is a Prime number",n);
    return 0;
}


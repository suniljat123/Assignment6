    #include<stdio.h>
int main()
{
    int n,cnt=0;
    printf("\nEnter Number=");
    scanf("%d",&n);
    while(n>1)
    {
        cnt++;
        n/=10;
    }
    printf("\nDigit of Number=%d",cnt);
    return 0;
}


    #include<stdio.h>
int main()
{
    int a,b=0;
    printf("\nEnter Number=");
    scanf("%d",&a);
    while(a>1)
    {
        b=b*10+a%10;
        a/=10;
    }
    printf("\nReverse of number=%d",b);
    return 0;
}


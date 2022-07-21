    #include<stdio.h>
int main()
{
    int a,b,n=2,temp_a,temp_b,c=1;
    printf("\nEnter 2 Numbers to find lcm=");
    scanf("%d%d",&a,&b);
    temp_a=a;
    temp_b=b;
    while(a>1||b>1)
    {
        if(a%n==0||b%n==0)
         {
             if(a%n==0)
                a=a/n;
            if(b%n==0)
                b=b/n;
             c=c*n;
         }
        else
            n++;
    }
    printf("\nLCM of %d and %d=%d",temp_a,temp_b,c);
    return 0;
}


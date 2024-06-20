#include<stdio.h>
int digit(int);

int main()
{
    int x,n,s;
    printf("enter a no");
    scanf("%d",&x);

    printf("enter no to find");
    scanf("%d",&n);

    s=digit(n);

    printf(" %d contains %d ",x,n);
}

int digit(int n)
{
    int rem;
    while(n)
    {
        rem = n%10;
        if(rem == digit)
            return 1;
        n = n/10;
    }
}

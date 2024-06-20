#include<stdio.h>

void nat(int);
int main()
{
    int x;
    printf("enter a no");
    scanf("%d",&x);

    nat(x);
    return 0;
}

void nat( int n)
{
     int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}

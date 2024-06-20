#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);

    odd(n);

    return 0;
}

void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!= 0)
        {
            printf("%d ",i);
        }
    }
}

#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);


     printf("factorial of %d = %d",n,factorial(n));
}
int factorial( int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
         f= f * i;

    }
 return f;

}

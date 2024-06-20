int oddEven(int);
int main()
{
    int n,s;
     printf("enter a no");
     scanf("%d",&n);

    s = oddEven(n);

    if (s == 1)
        printf(" no is even ");
    else
        printf("no is odd");
}
int oddEven( int n )
{

   if( n % 2 == 0 )
return 1;
   else
return 0;
}

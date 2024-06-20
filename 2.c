#include<stdio.h>
int simple_int(int,int ,int);
int main()
{
   int p,r,t,interest,result;
   printf("enter principal , rate , time ");
   scanf("%d %d %d", &p,&r,&t);

    simple_int(p,r,t);
   return 0;

}

int simple_int(int p, int r, int t)
{

    float si = (p * r * t )/ 100;

    printf(" simple interest= %f ",si);
}

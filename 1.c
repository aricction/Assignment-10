#include<stdio.h>
int circle(int );
int main()
{
    int r,area;
    printf("enter radius of cirlce");
    scanf("%d",&r);

    area = circle(r);
    printf("area of circle is %d",area);
}

int circle(int r)
{
    int area;

    area = 3.14*r*r;

    return area;
}

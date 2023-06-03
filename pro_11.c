// calculate the area of a circle

#include<stdio.h>
int main()
{
    float circle, pi = 3.14, r;

    printf("enter r : ");
    scanf("%f", &r);

    circle = pi*r*r;
    printf("area of circle = %f", circle);
    return 0;
}

/*  output

enter r : 12
area of circle = 452.160004

*/
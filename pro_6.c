// Verify the formula L = (c+d)*(g+h)

#include<stdio.h>
int main()
{
    float L, c, d, g, h;
    printf("enter c : ");
    scanf("%f", &c);

    printf("enter d : ");
    scanf("%f", &d);

    printf("enter g : ");
    scanf("%f", &g);

    printf("enter h : ");
    scanf("%f", &h);

    L = (c+d)*(g+h);
    printf("(c+d)*(g+h) = %f", L);
    return 0;
}

/*  output

enter c : 10
enter d : 34
enter g : -8
enter h : 56
(c+d)*(g+h) = 2112.000000

*/
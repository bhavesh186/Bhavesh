// verify the formula s = ((4*a+c) - 2*a*b)/100

#include<stdio.h>
int main()
{
    float a, b, c, s;

    printf("enter a : ");
    scanf("%f", &a);

    printf("enter b : ");
    scanf("%f", &b);

    printf("enter c : ");
    scanf("%f", &c);

    s = ((4*a+c) - (2*a*b))/100;
    printf("((4*a+c) - (2*a*b))/100 = %f", s);
    return 0;
}

/*  output

enter a : 23
enter b : 43
enter c : 12
((4*a+c) - (2*a*b))/100 = -18.740000

*/
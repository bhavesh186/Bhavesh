// verify the formula c = (a + b) * (a + b).

#include<stdio.h>
int main()
{
    float a, b, c;

    printf("enter a : ");
    scanf("%f", &a);

    printf("enter b : ");
    scanf("%f", &b);

    c = ((a + b) * (a + b));    // a*a + 2*a*b + b*b
    printf("((a + b) * (a + b)) = %f", c);
    return 0;
}

/*  output

enter a : 13
enter b : 12
((a + b) * (a + b)) = 625.000000

*/
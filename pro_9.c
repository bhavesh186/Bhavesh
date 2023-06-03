// verify the formula a = p*(1 + (r/100)/n)-p

#include<stdio.h>
int main()
{
    float p, r, n, a;

    printf("enter p : ");
    scanf("%f", &p);

    printf("enter r : ");
    scanf("%f", &r);

    printf("enter n : ");
    scanf("%f", &n);

    a = p*(1 + (r/100)/n)-p;
    printf("p*(1 + (r/100)/n)-p; = %f", a);
    return 0;
}

/*   output

enter p : 13
enter r : 10
enter n : 20
p*(1 + (r/100)/n)-p; = 0.065000

*/
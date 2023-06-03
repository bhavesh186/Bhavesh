//  Simple Interest = (P * R * T) / 100


#include<stdio.h>
int main()
{
    float p,r,n, prn;
    prn = ((p*r*n)/100);

    printf("enter P : ");
    scanf("%f", &p);

    printf("enter R : ");
    scanf("%f", &r);

    printf("enter N : ");
    scanf("%f", &n);

    // printf("(10*6*25)/100")
    printf("((p*r*n)/100) = %f", prn);

    return 0;
}

/* output

enter P : 100
enter R : 2
enter N : 3
((p*r*n)/100) = 0.000000

*/
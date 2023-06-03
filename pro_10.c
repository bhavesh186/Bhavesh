// verify the formula t = ((V + s) + (1 - m)*1)

#include<stdio.h>
int main()
{
    float V, s, m, t;

    printf("enter V : ");
    scanf("%f", &V);

    printf("enter s : ");
    scanf("%f", &s);

    printf("enter m : ");
    scanf("%f", &m);

    t = ((V + s) + (1 - m)*1);
    printf("((V + s) + (1 - m)*1) = %f", t);
    return 0;
}

/*  output

enter V : 10
enter s : 20
enter m : 30
((V + s) + (1 - m)*1) = 1.000000

*/
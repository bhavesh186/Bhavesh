// Verify the formula x = ((k-4)*(a*4))/100

#include<stdio.h>
int main()
{
    float x, k, a;

    printf("enter k : ");
    scanf("%f", &k);

    printf("enter a : ");
    scanf("%f", &a);

    x = ((k-4)*(a*4))/100;
    printf("((k-4)*(a*4))/100 = %f", x);
    return 0;
}

/*  output

enter k : 45
enter a : 2
((k-4)*(a*4))/100 = 3.280000

*/
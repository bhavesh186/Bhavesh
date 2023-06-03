// Calculate the area of triangle.

#include<stdio.h>
int main()
{
    float ab, ac, triangle;

    printf("enter ac : ");
    scanf("%f", &ac);

    printf("enter ab : ");
    scanf("%f", &ab);

    triangle = 0.5*ab*ac;  // 1/2 * ab * ac 
    printf("area of triangle = %f", triangle);
    return 0;
}

/*  output

enter ac : 10
enter ab : 12
area of triangle = 60.000000

*/
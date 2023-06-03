#include<stdio.h>
int main()
{
    int i, n, j = 'A';
    

    for(n='A'; n<='E'; n++)
    {

        for(i='A'; i<='E'; i++)
        {
            printf("\t %c", j);
            j++;
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         A       B       C       D       E
         F       G       H       I       J
         K       L       M       N       O
         P       Q       R       S       T
         U       V       W       X       Y

*/
#include<stdio.h>
int main()
{
    int i, n, j = 1;
    

    for(n=1; n<=5; n++)
    {

        for(i=1; i<=5; i++)
        {
            printf("\t %d", j);
            j++;
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         1       2       3       4       5
         6       7       8       9       10
         11      12      13      14      15
         16      17      18      19      20
         21      22      23      24      25

*/
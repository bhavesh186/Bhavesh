#include<stdio.h>
int main()
{
    int i, n;
    

    for(n=5; n>=1; n--)
    {

        for(i=5; i>=1; i--)
        {
            printf("\t %d", n);
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         5       5       5       5       5
         4       4       4       4       4
         3       3       3       3       3
         2       2       2       2       2
         1       1       1       1       1

*/
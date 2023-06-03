#include<stdio.h>
int main()
{
    int i, n;
    

    for(n=1; n<=5; n++)
    {

        for(i=1; i<=5; i++)
        {
            printf("\t %d", n);
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         1       1       1       1       1
         2       2       2       2       2
         3       3       3       3       3
         4       4       4       4       4
         5       5       5       5       5

*/
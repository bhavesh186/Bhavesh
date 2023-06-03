#include<stdio.h>
int main()
{
    int i, n;
    

    for(n=1; n<=5; n++)
    {

        for(i=1; i<=5; i++)
        {
            printf("\t %d", i);
        }
        printf("\n", n);
    }

    return 0;

}

/*  Output

         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5
         1       2       3       4       5

*/
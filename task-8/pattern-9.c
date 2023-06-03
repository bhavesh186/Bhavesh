#include<stdio.h>
int main()
{
    int i, n, j = 11;
    

    for(i=1; i<=5; i++)
    {

        for(n=1; n<=5; n++)
        {
            printf("\t %d", j++);
        
        }
        j+=5;
        printf("\n");
    }

    return 0;

}

/*  Output

         11      12      13      14      15
         21      22      23      24      25
         31      32      33      34      35
         41      42      43      44      45
         51      52      53      54      55

*/
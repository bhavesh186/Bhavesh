#include<stdio.h>
int main()
{
    int i, n;
    

    for(n=1; n<=9; n+=2)
    {

        for(i=1; i<=9; i+=2)
        {
            printf("\t %d", n);
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         1       1       1       1       1
         3       3       3       3       3
         5       5       5       5       5
         7       7       7       7       7
         9       9       9       9       9

*/
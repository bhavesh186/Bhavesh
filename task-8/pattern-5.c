#include<stdio.h>
int main()
{
    int i, n;
    

    for(n=2; n<=10; n+=2)
    {

        for(i=2; i<=10; i+=2)
        {
            printf("\t %d", n);
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         2       2       2       2       2
         4       4       4       4       4
         6       6       6       6       6
         8       8       8       8       8
         10      10      10      10      10

*/
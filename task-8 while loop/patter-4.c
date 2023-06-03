#include<stdio.h>
int main()
{
    int i, n;
    

    for(n='A'; n<='E'; n++)
    {

        for(i='A'; i<='E'; i++)
        {
            printf("\t %c", n);
        }
        printf("\n", i);
    }

    return 0;

}

/*  Output

         A       A       A       A       A
         B       B       B       B       B
         C       C       C       C       C
         D       D       D       D       D
         E       E       E       E       E

*/
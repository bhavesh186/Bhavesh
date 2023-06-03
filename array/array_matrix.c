#include <stdio.h>
int main()
{
    int a[10][10], i, j, k;
    int b[10][10];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n-------- Matrix A ---------\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\n Enter b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n\n-------- Matrix B ---------\n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t %d", b[i][j]);
        }
        printf("\n");
    }

    printf("\n\n-------- Matrix A --------     ------- Matrix B --------     -------- Matrix A +B ----------\n\n");

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("\t %d", a[i][j]);
            }
            printf("\t");
            for (j = 0; j < 3; j++)
            {
                printf("\t %d", b[i][j]);
            }
            printf("\t");
            
            for(j = 0; j < 3; j++)
            {
                printf("\t %d", a[i][j] + b[i][j]);
            }
            printf("\n");

        }

    return 0;
}
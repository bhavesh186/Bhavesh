#include <stdio.h>
int main()
{
    int a[10][10], i, j, total_ut=0, total_lt=0, total_de=0;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\n Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\n-------- Matrix A ---------\n\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    
    // printf("Uper Triangel = %d \n", a[1][2]+a[1][3]+a[2][3]);
    // printf("Lover Triangel = %d \n", a[2][1]+a[3][1]+a[3][2]);
    // printf("Diagonal Element = %d \n", a[1][1]+a[2][2]+a[3][3]);

    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            if(i<j){
                total_ut = total_ut + a[i][j];
            }
            else if(i>j){
                total_lt = total_lt + a[i][j];
            }
            else{
                total_de = total_de + a[i][j];
            }
        }
        
    }
    printf("\nSum of Upper Triangle Elements : %d", total_ut);
    printf("\nSum of Lover Triangle Elements : %d", total_lt);
    printf("\nSum of Diagonal  Elements : %d", total_de);


    return 0;
}
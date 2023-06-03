#include<stdio.h>
int main()
{
    int row, colom;
    int count = 1;
    for(row=1; row<=5; row++){
        // count = (row*row)-(row-1);
        for(colom=1; colom<=row; colom++){

            printf("%d ", count +1 -row);
            count = count-1;
        }
        count++;
        printf("\n");
    }
    return 0;

}

/*------------output-------------



/*------------output-------------*/

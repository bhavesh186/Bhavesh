#include<stdio.h>
int main()
{
    int row, colom;
    int count = 1;
    for(row=1; row<=5; row++){
        count = row;
        for(colom=1; colom<=row; colom++){
            printf("%d ", count);
            count += 5-colom;
        }
        printf("\n");
    }
    return 0;

}

/*------------output-------------

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

/*------------output-------------*/

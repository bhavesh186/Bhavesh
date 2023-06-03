#include<stdio.h>
int main()
{
    int row, colom, space;

    for(row=1; row<=4; row++){
        for(colom=4; colom>=row; colom--){
            printf("%d ", row);
        }
        printf("\n");
    }

}

/*------------output-------------

1 1 1 1
2 2 2
3 3
4

/*------------output-------------*/

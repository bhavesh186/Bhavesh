// take the number of chairs and their total cost, and print the cost of each chair.

#include<stdio.h>
int main()
{
    int n, rs;
    printf("enter the total chairs : ");
    scanf("%d", &n);

    printf("enter the price of total chairs : ");
    scanf("%d", &rs);

    printf("one chair price = %d", rs/n);
    return 0;
}

/*  output

enter the total chairs : 6
enter the price of total chairs : 3000
one chair price = 500

*/
// Take a number, and print its multiplication table up to 10

#include<stdio.h>
int main()
{
    int i;

    printf("enter i : ");
    scanf("%d", &i);

    printf("\n %d * 1 = %d",i,i*1);
    printf("\n %d * 2 = %d",i,i*2);
    printf("\n %d * 3 = %d",i,i*3);
    printf("\n %d * 4 = %d",i,i*4);
    printf("\n %d * 5 = %d",i,i*5);
    printf("\n %d * 6 = %d",i,i*6);
    printf("\n %d * 7 = %d",i,i*7);
    printf("\n %d * 8 = %d",i,i*8);
    printf("\n %d * 9 = %d",i,i*9);
    printf("\n %d * 10 = %d",i,i*10);

    
    return 0;

}

/* Output

 enter i : 12

 12 * 1 = 12
 24 * 2 = 12
 36 * 3 = 12
 48 * 4 = 12
 60 * 5 = 12
 72 * 6 = 12
 84 * 7 = 12
 96 * 8 = 12
 108 * 9 = 12

 */
//Pointer

#include<stdio.h>
int main()
{
    int x, y, x1, y1, z;
    printf("Enter X : ");
    scanf("%d", &x);
    printf("Enter Y : ");
    scanf("%d", &y);

    x1 = &x;
    y1 = &y;
    x = y1;
    y = x1;

    printf("%u \t %d \n", &x1,x1);
    printf("%u \t %d \n", &y1,y);
    

}
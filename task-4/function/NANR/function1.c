#include<stdio.h>

void multiply()       //  function define
{
    
    int i;
    printf("eneter I : ");
    scanf("%d", &i);

    printf("\n %d * 1 = %d", i, i*1);
    printf("\n %d * 2 = %d", i, i*2);
    printf("\n %d * 3 = %d", i, i*3);
    printf("\n %d * 4 = %d", i, i*4);
    printf("\n %d * 5 = %d", i, i*5);
    printf("\n %d * 6 = %d", i, i*6);
    printf("\n %d * 7 = %d", i, i*7);
    printf("\n %d * 8 = %d", i, i*8);
    printf("\n %d * 9 = %d", i, i*9);
    printf("\n %d * 10 = %d", i, i*10);

    
}

int main()
{
   
    multiply();     //  function calling
    
}
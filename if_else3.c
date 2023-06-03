#include<stdio.h>
int main()
{
    int B;
    printf("enter One value : ");
    scanf("%d", B);

    if(B%5==0){
        printf(" %d this value was divisable by 5", B%5);
    }else{
        printf("this value was not divisable by 5");
    }
}
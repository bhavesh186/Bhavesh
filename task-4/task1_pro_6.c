#include<stdio.h>
int main(){

    int x, y;
    printf("Enter The Value of X : ");
    scanf("%d", &x);

    printf("Enter The Value of Y : ");
    scanf("%d", &y);

    if(x<2000 && x>3000 && y>100 && y<500){
        printf("%d - this value is lesthen 2000 and greterthan 3000, and %d - this value is bitveen 100 and 500", x,y);
    }else if(x<2000 && x>3000){
        printf("%d - this value is lesthen 2000 and greterthan 3000", x);
    }else if(y>100 && y<500){
        printf("%d - this value is beetvin 100 and 500", y);
    }

    
}
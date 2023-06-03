#include<stdio.h>
int main()
{
    int mark;

    printf("Please Enter Your Mark... : ");
    scanf("%d", &mark);

    if(mark>=95 && mark<=100){
        printf("Your gred A+");
    }else if(mark>=90 && mark<=94){
        printf("Your gred A");
    }else if(mark>=70 && mark<=89){
        printf("Your gred B");
    }else if(mark>=50 && mark<=69){
        printf("Your gred C");
    }else if(mark>=33 && mark<=49){
        printf("Your gred D");
    }else{
        printf("You are Fail");
    }

    return 0;

}

/* out put

Please Enter Your Mark... : 94
Your gred A

Please Enter Your Mark... : 99
Your gred A+

*/
#include<stdio.h>
int main()
{
    float ;
    int unit;

    
     
    printf("enter the value of unit : ");
    scanf("%d", &unit);

    if(unit>=0 && unit<=100){
        printf("total bill = %f rs.", 50+(unit*0.6));
    }
    else if(unit>100 && unit<=300){
        printf("total bill = %f rs.", (110)+(unit-100)*0.8);
    }else{
        printf("total bill = %f rs.", ((270)+(unit-300)*0.9)*1.15);
    }

    return 0;

}


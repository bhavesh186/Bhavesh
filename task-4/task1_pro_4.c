#include<stdio.h>
int main()
{
    
    float amount, slab1, slab2, slab3;

    slab1 = amount-2500;
    slab2 = amount-5000;
    slab3 = amount-10000;
    
    

    printf("enter the value of amount : ");
    scanf("%d", &amount);

    

    if(amount>=0 && amount<=2500){
        printf("total tex amount = %d rs.", 0);
    }
    else if(amount>2500 && amount<=5000){
        
        printf("total tex amount = %d rs.", (slab1*0.1));
    }else if(amount>5000 && amount<=10000){
        printf("total tex amount = %d rs.", (250)+(slab2*0.2));
    }else{
        printf("%f", slab3);
        printf("total tex amount = %d rs.", (1250)+(slab3*0.3));
    }

    return 0;

}


/*   output

enter the value of unit : 340
total bill = 351.900000 rs.

enter the value of unit : 250
total bill = 230.000000 rs.

*/
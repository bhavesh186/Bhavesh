/*   odd    */

#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int total =0;

    for(i = 0; i<10; i++){
        printf("Enter a[%d] : ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n--------------Array--------------\n");
    for(i=0; i<10; i++){
        printf("\n\t a[%d]  :  %d  ",i+1, a[i]);
    }

    printf("\n--------------total Odd number ex. a[1], a[3], a[5]--------------\n");

    for(i=0; i<10; i=i+2){
        printf("\n\t a[%d]  :  %d  ",i+1, a[i]);
        total=total+a[i];
    }

    printf("\n-------------- Total --------------\n");

    printf("Total = %d",total);


}
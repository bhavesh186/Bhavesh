#include<stdio.h>
int main()
{
    int a[10];
    int i;
    int total = 0;
    
    for(i = 0; i<10; i++){
        printf("Enter a[%d] : ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\n--------------Array--------------\n");
    for(i=0; i<10; i++){
        
        printf("\n\t a[%d]  :  %d  ",i+1, a[i]);
        
    }

    printf("\n--------------Full Total--------------\n");

    for(i=0; i<10; i++){
        total = total+a[i]; 
    }
    printf("\n %d", total);


    printf("\n--------------a[i] ex. a[1], a[3], a[5] odd Number--------------\n");

    for(i=0; i<10; i=i+2){
        // printf("\n\t a[%d]  :  %d  ",i+1, a[i]);
        total=total+a[i];
    }

    printf("Total = %d",total);

    printf("\n--------------a[i] ex. a[2], a[4], a[6] even Number--------------\n");

    for(i=2; i<=10; i=i+2){
        // printf("\n\t a[%d]  :  %d  ",i, a[i-1]);
        total=total+a[i-1];
    }

    printf("Total = %d",total);

    printf("\n-------------- Odd Number--------------\n");

    
    for(i=0; i<10; i++){
        if(a[i]%2 == 1){
            // printf("\n a[%d]  :  %d  ",i+1, a[i]);
        }
        
    }

    printf("\n--------------Total--------------\n");

    for(i=0; i<10; i++){
        if(a[i]%2 == 1){
            total = total+a[i];
        }
        
    }
    printf("\n %d", total);

    printf("\n-------------- Even Number--------------\n");

    for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            // printf("\n a[%d]  :  %d  ",i+1, a[i]);
        }
        
    }

    printf("\n--------------Total--------------\n");

    for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            total = total+a[i];
        }
        
    }
    printf("\n %d", total);

        
}
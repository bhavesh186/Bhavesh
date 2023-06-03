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
        if(a[i]%2 == 0){
            printf("\n a[%d]  :  %d  ",i+1, a[i]);
        }
        // printf("\n\t a[%d]  :  %d  ",i+1, a[i]);
        
    }

    printf("\n--------------Total--------------\n");

    for(i=0; i<10; i++){
        if(a[i]%2 == 0){
            total = total+a[i];
        }
        
    }
    printf("\n %d", total);

    
}
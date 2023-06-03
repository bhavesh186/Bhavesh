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

    printf("\n--------------Total--------------\n");

    for(i=0; i<10; i++){
        total = total+a[i]; 
    }
    printf("\n %d", total);

    
}
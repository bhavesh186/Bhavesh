#include<stdio.h>
int main()
{
    int a[10];
    int b[10];
    int i;
    for(i = 0; i<5; i++){
        printf("Enter a[%d] : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i<5; i++){
       printf("Enter b[%d] : ", i+1);
        scanf("%d", &b[i]); 
    }
    printf("\n--------------Array--------------\n");
    for(i=0; i<5; i++){
        printf("\n\t a[%d] : %d  \t b[%d] %d",i+1, a[i], i+1, b[i]);
    }
}
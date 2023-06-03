#include<stdio.h>
int main(){
    // int row, col=1, space = 15, count=1;
    // for(row=5; row>=1; row--){

    //     for(col=0; col<=space; col++){
    //         printf("\t");
    //     }

    //     for(col=row; col>=1; col--){
    //         printf("%d\t", count);
    //         count++;
    //     }
    //     space++;
    //     printf("\n");
   // }
   int i , j, k=1;
   for(i=1; i>=5; i++)
   {
        for(j=1; j<=k; j++)
        {
            if(i=6-j){
                printf("%d", k);
            }else{
                printf(" ");
            }
        }
        k++;

   }
    
}
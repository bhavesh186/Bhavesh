#include<stdio.h>
int main(){

    int n, i;
    printf("enter N - ");
    scanf("%d", &n);

    i=-n;

    while(i<=n){
        printf("%d\n", i);
        i++;
    }

    return 0;

}
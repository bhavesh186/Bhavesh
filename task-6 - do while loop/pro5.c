#include<stdio.h>
int main(){

    int n, i;
    printf("enter N - ");
    scanf("%d", &n);

    i=-n;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    return 0;

}
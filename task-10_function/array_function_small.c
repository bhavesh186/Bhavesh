#include<stdio.h>  
  
#define N 5  
  
void display(int a[])  
{  
    int i, min, max;
    min = a[0];
    max = a[0];
    for(i=0; i<N; i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    printf("minimum number : %d\n", min);
    printf("maximum number : %d", max);
} 
int main()
{
    int a[5];
    int i;
    printf("enter number : ");
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a);
}
#include<stdio.h>
int main()
{
int i=65,j=0;

do
{
    j=i+32;
    printf("%c - %c \n",i,j);
    i++;
} while (i<=90);

return 0;
}

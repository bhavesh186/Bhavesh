#include<stdio.h>
int main()
{
    char str[50];
    int i,j, length;
    printf("Enter String Value : ");
    gets(str);


    for(i=0; str[i]!='\0'; i++){
        
    }
    length = i-1;
    
    for(j=0; j<i/2; j++){

        printf("%c %c ",str[j], str[length-j]);

    }
    if(i%2 != 0)
        {
            printf("%c", str[i/2]);
        }


    

}
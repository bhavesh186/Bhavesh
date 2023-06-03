#include<stdio.h>
int main()
{
    char str[50], str1[50];
    int i,j, length;
    printf("Enter String Value : ");
    gets(str);


    for(i=0; str[i]!='\0'; i++){
        
    }
    length = i;
    
    for(j=0; j<length; j++){
        str1[j] = str[--i];
    }

    str1[j] = '\0';

    printf("%s", str1);


}
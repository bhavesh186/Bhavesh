#include<stdio.h>

int function()
{
    char str[5], str1[5];
    int i,j, length;
    printf("Enter 5 diget Number : ");
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

int main()
{
    function();
}
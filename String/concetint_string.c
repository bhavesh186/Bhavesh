#include<stdio.h>
int main()
{
    char str[50], str1[50];

    printf("Enter String1 : ");
    gets(str);

    printf("Enter String2 : ");
    gets(str1);

    int i, j, k;

    for(i=0; str[i]!='\0'; i++){
        
    }
    k = i;
    for(j=0; str1[j]!='\0'; j++){
        
    }
    
        for(i=0; i<j; i++)
        {
            str[k++] = str1[i];
        }
    str[k] = '\0';

        printf("Your string is : %s", str);

}
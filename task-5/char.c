#include<stdio.h>
int main(){
    char charecter;
    
    printf("Enter Only One Charecter : ");
    scanf("%c", &charecter);

    if(charecter == 'a' || charecter == 'e' || charecter == 'i' || charecter == 'o' || charecter == 'u' || charecter == 'A' || charecter == 'E' || charecter == 'I' || charecter == 'O' || charecter == 'U'){
        printf("you enter the value is vowel");
    }
    else{
        printf("you enter the value is constant");
    }

    return 0;

}
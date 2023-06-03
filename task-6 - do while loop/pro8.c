#include <stdio.h>
int main() {
    char i = 'A';

    do
    {
        printf("%c \n", i);
        ++i;
    } while (i <= 'Z');
    
    return 0;
}
#include <stdio.h>
 
int main() {
    int a = 0;
     
    do
    {
        printf("%c = %d   |   %c = %d \n",
          'A'+a,'A'+a,'a'+a,'a'+a);
          a++;
    } while (a < 26);
    
    return 0;
}
#include <stdio.h>
 
int main() {
    int a;
     
    for(a = 0; a < 26; a++){
       printf("%c = %d   |   %c = %d \n",
          'A'+a,'A'+a,'a'+a,'a'+a);
    }
     
    return 0;
}
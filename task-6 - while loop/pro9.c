#include <stdio.h>
 
int main() {
    int a = 0;
     
    while(a < 26){
       printf("%c = %d   |   %c = %d \n",
          'A'+a,'A'+a,'a'+a,'a'+a);
          a++;
    }
     
    return 0;
}
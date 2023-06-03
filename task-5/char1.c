#include <stdio.h>  
 
int main ()  
{  
    char charecter; 
    int asci;  

    printf (" Enter the One Character : ");  
    scanf (" %c", &charecter);  
      
      if(asci == charecter + 32){
        printf (" %c character in Lower case is : %c", charecter, asci); 
      }else if(asci == charecter - 32){
        printf (" %c character in the Upper case is : %c", charecter, asci);
      }else{
        printf (" Please Enter the valid value : ");
      }
    
      
    return 0;  
}  
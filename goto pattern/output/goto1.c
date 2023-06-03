// #include <stdio.h>
// int main() {
//    int a=5,c=5,b;
//    z:
//    if(a>=1){
//       b=1;
//       x:
//       if(a>=b){
//          printf(" *");
//          b++;
//          goto x;
//       }
//       printf("\n");
//       c=5;
//       y:
//       if(c>=a){
//          printf(" ");
//          c--;
//          goto y;
//       }
//       a--;
//       goto z;
//    }
//    return 0;
// }

#include <stdio.h>
int main()
{
   int row = 5, col = 5, sp;
x:
   if (row >= 1)
   {
      sp = 1;
   y:
      if (row >= sp)
      {
         printf(" *");
         sp++;
         goto y;
      }
      printf("\n");
      col = 5;
   z:
      if (col >= row)
      {
         printf(" ");
         col--;
         goto z;
      }
      row--;
      goto x;
   }
   return 0;
}

#include <stdio.h>
int main()
{
   int row = 5, col = 5, sp;
x:
   if (row >= 1)
   {
      sp = 1;
   y:
      if (row >= sp)
      {
         printf(" *");
         sp++;
         goto y;
      }
   }
   //       printf("\n");
   //       col=5;
   //       z:
   //       if(col>=row){
   //          printf(" ");
   //          col--;
   //          goto z;
   //       }
   //       row--;
   //       goto x;
   //    }
   return 0;
}

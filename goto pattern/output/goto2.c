// #include<stdio.h>
// int main(){
//    int a=0, b=0;
//    x:
//    if(a<=5){
//       b=0;
//       y:
//       if(b<=a){
//          printf(" *");
//          b++;
//          goto y;
//       }
//          printf("\n");
//          a++;
//          goto x;
//    }
//    return 0;
// }


// #include <stdio.h>
// int main() {
//    int i, space, rows, k = 0;
//    printf("Enter the number of rows: ");
//    scanf("%d", &rows);

//       x:
//       k = 0;
//    for (i = 1; i <= rows; ++i) {
//       y:
//       for (space = 1; space <= rows - i; ++space) {
//          printf("  ");
//          goto y;
//       }
//       z:
//       while (k != 2 * i - 1) {
//          printf("* ");
//          ++k;
//          goto z;
//       }
//       printf("\n");
//       goto x;
//    }
   
//    return 0;
// }

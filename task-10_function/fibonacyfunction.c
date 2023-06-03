#include<stdio.h>
int fibonaccy(int n)
{
    int i, a1 = 1, a2 = 1;
    int nextTerm = a1+a2;
    
        // printf("%d, %d, ", a1,a2);
        // for (i = 3; i <= n; ++i) {
        // printf("%d, ", nextTerm);
        // a1 = a2;
        // a2 = nextTerm;
        // nextTerm = a1 + a2;
        // }

}
int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i=1; i<=n; ++i)
    {
        fibonaccy(n);
    }

    
    
}







// #include <stdio.h>
// int main() {

//   int i, n;

//   // initialize first and second terms
//   int t1 = 0, t2 = 1;

//   // initialize the next term (3rd term)
//   int nextTerm = t1 + t2;

//   // get no. of terms from user
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   // print the first two terms t1 and t2
//   printf("Fibonacci Series: %d, %d, ", t1, t2);

//   // print 3rd to n th terms
//   for (i = 3; i <= n; ++i) {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }

//   return 0;
// }
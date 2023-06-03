#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    if(a>b){
        printf("\n a = %d is greter value", a);
    }else{
        printf("\n b = %d is greter value", b);
    }
}


/*   output

Enter A : 13
Enter B : 24

 b = 24 is greter value

*/
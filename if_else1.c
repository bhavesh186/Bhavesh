#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    if(a<b){
        printf("\n a = %d is smallest value", a);
    }else{
        printf("\n b = %d is smallest value", b);
    }
}


/*   output

Enter A : 13
Enter B : 45

 a = 13 is smallest value

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter A : ");
    scanf("%d", &a);


    if(a>0){
        printf("\n a = %d is positive value", a);
    }else{
        printf("\n b = %d is negative value", a);
    }
}


/*   output

Enter A : 15

 a = 15 is positive value
PS D:\bbd> ./if_else2
Enter A : -24

 b = -24 is negative value

*/
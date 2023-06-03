#include<stdio.h>
int main()
{
    int B;
    printf("enter One value : ");
    scanf("%d", &B);

    if(B%15 == 0)
    {
        printf(" %d - this value was divisable by 5 and 3", B);
    }
    else
    {
        printf(" %d - this value was not divisable by 5 and 3", B);
    }

    return 0;
}


/* output

enter One value : 15
15 - this value was divisable by 5 and 3

*/
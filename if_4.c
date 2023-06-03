#include<stdio.h>
int main()
{
    int b, c, d, e;
    printf("enter first value : ");
    scanf("%d", &b);

    printf("enter second value : ");
    scanf("%d", &c);
    d=b*c;
    e=b+c;

    printf("%d \n", e);
    printf("%d \n", d);


    if(d%e==0)
    {
        printf("this value was divisable by %d", e);
    }
    else
    {
        printf("this value was not divisable by %d", e);
    }

    return 0;
}


/*    output

enter first value : 7
enter second value : 3
10 
21 
this value was not divisable by 10

*/
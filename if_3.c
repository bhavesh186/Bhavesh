#include<stdio.h>
int main()
{
    int b, c, d;
    printf("enter first value : ");
    scanf("%d", &b);

    printf("enter second value : ");
    scanf("%d", &c);
    d=b*c;


    if(d%21==0)
    {
        printf("%d this value was divisable by 3 and 7", d);
    }
    else
    {
        printf("%d this value was not divisable by 3 and 7", d);
    }

    return 0;
}


/*   output

enter first value : 14
enter second value : 3
42 this value was divisable by 3 and 7

*/
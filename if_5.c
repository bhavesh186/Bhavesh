#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first value : ");
    scanf("%d", &a);

    printf("enter second value : ");
    scanf("%d", &b);

    printf("enter third value : ");
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d", a);
        }
        else{
            printf("%d", c);
        }
        
    }
    else
    {
        if(c>b)
        {
            printf("%d", c);
        }
        else{
            printf("%d", b);
        }
    }

    return 0;
}

/*  output

enter first value : 10
enter second value : 20
enter third value : 3
20

*/
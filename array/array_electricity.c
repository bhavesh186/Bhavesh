#include <stdio.h>
int main()
{
    float;
    int i, unit[5];

    for (i = 0; i < 5; i++)
    {
        printf("enter the value of unit[%d] : ", i + 1);
        scanf("%d", &unit[i]);
    }

    for (i = 0; i < 5; i++)
    {

        if(unit[i] >= 0 && unit[i] <= 100)
        {
            printf("total bill = %f rs. \n", 50 + (unit[i] * 0.6));
        }
        else if (unit[i] > 100 && unit[i] <= 300)
        {
            printf("total bill = %f rs. \n", (110) + (unit[i] - 100) * 0.8);
        }
        else
        {
            printf("total bill = %f rs. ", ((270) + (unit[i] - 300) * 0.9) * 1.15);
        }
    }


    return 0;
}
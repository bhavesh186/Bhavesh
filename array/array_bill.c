#include <stdio.h>
int main()
{
    int i, ProductNo[5], Price[5], Qty[5], BillAmt[5], RateAD[5], DiscAmt[5], Gst[5], Rate[5];
    int total_disc = 0, total_gst = 0, total_bill = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter ProductNo[%d] : ", i + 1);
        scanf("%d", &ProductNo[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Enter Price[%d] : ", i + 1);
        scanf("%d", &Price[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Enter Qty[%d] : ", i + 1);
        scanf("%d", &Qty[i]);
    }

    printf("ProductNo. \t Price \t\t Qty \t\t Rate \t\t DiscAmt \t RateAD \t Gst \t BillAmt \n");

    for (i = 0; i < 5; i++)
    {
        // printf("%d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \t %d \n",
        //        ProductNo[i], Price[i], Qty[i], Qty[i] * Price[i], (Qty[i] * Price[i]) / 10,
        //        (Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10, (((Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10) * 18) / 100,
        //        (Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10 + (((Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10) * 18) / 100);

               printf("%d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d \t %d \n",
               ProductNo[i], Price[i], Qty[i], Qty[i] * Price[i], (Qty[i] * Price[i])/10,
               ((Qty[i] * Price[i])-(Qty[i] * Price[i])/10), (((Qty[i] * Price[i])*(1 - 1/10))*18)/100,
               (Qty[i] * Price[i])*(1 - 1/10) + (((Qty[i] * Price[i])*(1 - 1/10))*18)/100);
    }

    for (i = 0; i < 5; i++)
    {
        total_disc = total_disc + ((Qty[i] * Price[i]) / 10);
    }
    printf(" \t\t\t\t\t\t\t\t %d", total_disc);

    for (i = 0; i < 5; i++)
    {
        total_gst = total_gst + (((Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10) * 18) / 100;
    }

    printf(" \t\t\t\t %d", total_gst);

    for (i = 0; i < 5; i++)
    {
        total_bill = total_bill + (Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10 + (((Qty[i] * Price[i]) - (Qty[i] * Price[i]) / 10) * 18) / 100;
    }

    printf(" \t %d", total_bill);

}

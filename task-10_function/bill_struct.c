#include<stdio.h>
struct billing{
    int proNo, price, rateAd, Rate, qty, billamt;
    float gst, disc;
    char proName[10];
};
int main()
{
    struct billing a[5];
    int i;
    int proNo, price, rateAd, Rate, qty, billamt;
    float gst, disc;
    char proName[10];

    

    // disc = price/10;
    // rateAd = (price - (price/10));
    // gst = ((price - (price/10))/18);
    // Rate = ((price - (price/10)) + ((price - (price/10))/18));

    for(i=1; i<=2; i++)
    {
        printf("Enter Product Name : ");
        scanf("%s", &a[i].proName);
        printf("Enter Product No : ");
        scanf("%d", &a[i].proNo);
        printf("Enter Product Price : ");
        scanf("%d", &a[i].price);
        printf("Enter Product qty : ");
        scanf("%d", &a[i].qty);
    }

    Rate = price*qty;
    disc = Rate*0.10;
    rateAd = (Rate - (Rate*0.10));
    gst    =  ((Rate - (Rate*0.10))*0.18);   
    billamt=  ((Rate - (Rate*0.10)) + ((Rate - (Rate*0.10))*0.18));

    printf("ProName\t ProNo\t Price\t Qty \t Rate discount\t RateAd\t Gst\t BillAmt\n");
    for(i=1; i<=2; i++)
    {
        printf("%s\t %d\t %d\t %d\t %d\t %d\t %d\t .2%f\t %d\n", a[i].proName, a[i].proNo, a[i].price, a[i].qty, a[i].Rate, a[i].disc,
        a[i].rateAd, a[i].gst, a[i].billamt);
    }
}
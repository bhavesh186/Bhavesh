#include<stdio.h>
int main()
{
    int productname,price,qty,rate,dis,ratead,gst,billamt;
    printf("productname :");
    scanf("%d",&productname);
    printf("price:");
    scanf("%d",&price);
    printf("qty:");
    scanf("%d",&qty);
    
    rate   =  price  * qty ;
    dis    =  rate   * 0.10;
    ratead =  rate   - dis ;
    gst    =  ratead * 0.18;   
    billamt=  ratead + gst;
    printf("productname \t price,\t qty,\t rate,\t dis,\t ratead, gst,\t billamt");
    printf("\n    %d,     \t %d,\t %d,\t %d,\t %d, \t %d,\t %d,\t %d",productname,price,qty,rate,dis,ratead,gst,billamt);
}
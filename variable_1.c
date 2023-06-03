#include<stdio.h>
int main()
{

    int a, j;
    printf("Enter the number...");
    scanf("%d",&a);
    
    for(int i=1; i<=a; i++){
        for(int j=1; J<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    // float a=9,b=4,c=2,d=12, z;
    // float a1=6,b1=9,c1=45,d1=5, z1;
    // float a2=123,b2=1,c2=2,d2=63, z2;
    // float a3=8,b3=30,c3=7,d3=6, z3;
    // float a4=11,b4=11,c4=8,d4=1, z4;

    // z = a*b/c+d;
    // z1 = a1*b1+c1/d1;
    // z2 = a2/b2*c2-d2;
    // z3 = a3+b3*c3/d3;
    // z4 = a4*b4-c4/d4;

    // printf("\n a*b/c+d = %f", z);
    // printf("\n a1*b1+c1/d1 = %f", z1);
    // printf("\n a2/b2*c2-d2 = %f", z2);
    // printf("\n a3+b3*c3/d3 = %f", z3);
    // printf("\n a4*b4-c4/d4 = %f", z4);

    return 0;
    
}
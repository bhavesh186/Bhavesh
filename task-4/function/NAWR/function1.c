#include<stdio.h>

int equation()
{
    int a=10, b=20, c=5, d=4, e=1, z;
	z= a+b/c*d-e;
	printf("\n a+b/c*d-e = %d", z);

	// int a1=9, b1=4, c1=2, d1=12, e1;
	// e1 = a1*b1/c1+d1;
	// printf("\n a1*b1/c1+d1 = %d", e1);
    
	return z;
}

int main()
{
	int x;
    x = equation();
    printf("%d", x);

}
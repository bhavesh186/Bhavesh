#include<stdio.h>
int main()
{
    int rollno1, rollno2, rollno3, sub, chemistry1, chemistry2, chemistry3, physics1, physics2, physics3,
    maths1, maths2, maths3, totalMarks1, totalMarks2, totalMarks3, grad, persantege1, persantege2, persantege3;

    totalMarks1 = chemistry1+physics1+maths1;
    totalMarks2 = chemistry2+physics2+maths3;
    totalMarks3 = chemistry3+physics3+maths3;
    persantege1 = totalMarks1/3;
    persantege2 = totalMarks2/3;
    persantege3 = totalMarks3/3;

    printf("enter roll no1");
    scanf("%d", &rollno1);

    // printf("enter roll no2");
    // scanf("%d", &rollno2);

    // printf("enter roll no3");
    // scanf("%d", &rollno3);

    printf("chemistry mark1");
    scanf("%d", &chemistry1);

    // printf("chemistry mark2");
    // scanf("%d", &chemistry2);

    // printf("chemistry mark3");
    // scanf("%d", &chemistry3);

    printf("Physics mark1");
    scanf("%d", &physics1);

    // printf("Physics mark2");
    // scanf("%d", &physics2);

    // printf("Physics mark3");
    // scanf("%d", &physics3);

    printf("maths mark1");
    scanf("%d", &maths1);

    // printf("maths mark2");
    // scanf("%d", &maths2);

    // printf("maths mark3");
    // scanf("%d", &maths3);

    printf("Roll No. \t");
    printf("Subject1 \t");
    printf("Subject2 \t");
    printf("Subject3 \t");
    printf("Total Marks \t");
    printf("Persantege \t");
    printf("Grade \n");

    printf("%d \t, %d \t, %d \t, %d \t, %d \t, %d \n", rollno1,chemistry1,physics1,maths1,totalMarks1,persantege1);


}
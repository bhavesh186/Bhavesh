#include<stdio.h>
int maths, sci, phy, eng, total;
float per;
char grade;
void display()
{
    // int grade, total;
    // float per;

    if(per>=90){
        grade = 'A';
    }else if(per<=89 && per>=75){
        grade = 'B';
    }else if(per<=74 && per>=60){
        grade = 'C';
    }else if(per<=59 && per>=50){
        grade = 'D';
    }else{
        grade = 'F';
    }

    printf("Maths\tScience\tPhysics\tEnglish\ttotal\tPersantage\tGrade\n");
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%c", maths,sci,phy,eng,total,per,grade);

}
void calc()
{
    // int total;
    // float per;

    total = maths + sci + eng + phy;
    per = (float)total/4;


}
void setdata()
{
    
    printf("Enter Maths Mark : ");
    scanf("%d", &maths);
    printf("Enter Science Mark : ");
    scanf("%d", &sci);
    printf("Enter Physics Mark : ");
    scanf("%d", &phy);
    printf("Enter English Mark : ");
    scanf("%d", &eng);

}
int main()
{
    setdata();
    calc();
    display();
}

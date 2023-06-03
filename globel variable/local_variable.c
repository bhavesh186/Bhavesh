#include<stdio.h>
// int maths, sci, phy, eng, total;
// float per;
// char grade;
int setdata()
{
    int maths, sci, phy, eng;
    
    printf("Enter Maths Mark : ");
    scanf("%d", &maths);
    printf("Enter Science Mark : ");
    scanf("%d", &sci);
    printf("Enter Physics Mark : ");
    scanf("%d", &phy);
    printf("Enter English Mark : ");
    scanf("%d", &eng);
    
}
float calc()
{
    int maths, sci, phy, eng, total;
    float per;
    total = maths + sci + eng + phy;
    per = (float)total/4;

}
void display()
{
    // int grade, total;
    // float per;
    int maths, sci, phy, eng, total;
    float per;
    char grade;
    
    if(maths<33 || sci<33 || phy<33 || eng<33){
        grade = 'F';
    }
    else if(per>=90){
        grade = 'A';
    }else if(per<=89 && per>=75){
        grade = 'B';
    }else if(per<=74 && per>=60){
        grade = 'C';
    }else if(per<=59 && per>=45){
        grade = 'D';
    }else if(per<=44 && per>=33){
        grade = 'E';
    }

    printf("Maths\tScience\tPhysics\tEnglish\ttotal\tPersantage\tGrade\n");
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%c", maths,sci,phy,eng,total,per,grade);

}

int main()
{
    setdata();
    calc();
    display();
}


/*

#include<stdio.h>
// int maths, sci, phy, eng, total;
// float per;
// char grade;

void display(int maths,int sci,int phy,int eng,int total,int per)
{

    printf("Maths\tScience\tPhysics\tEnglish\ttotal\tPersantage\tGrade\n");
    printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%.2f\t\t%c", maths,sci,phy,eng,total,per);
    
    char grade;
    
    if(maths<33 || sci<33 || phy<33 || eng<33){
        printf("\t Fail");
    }
    else if(per>=90){
        printf("\t A");
    }else if(per<=89 && per>=75){
        printf("\t B");
    }else if(per<=74 && per>=60){
        printf("\t C");
    }else if(per<=59 && per>=45){
        printf("\t D");
    }else if(per<=44 && per>=33){
        printf("\t E");
    }

    

}
int calc(int maths, int sci,int phy, int eng)
{
    int total;
    float per;
    total = maths+sci+phy+eng;
    per = (float)total/4;
    display(maths,sci,phy,eng,total,per);

}
int setdata()
{
    int maths, sci, phy, eng;
    
    printf("Enter Maths Mark : ");
    scanf("%d", &maths);
    printf("Enter Science Mark : ");
    scanf("%d", &sci);
    printf("Enter Physics Mark : ");
    scanf("%d", &phy);
    printf("Enter English Mark : ");
    scanf("%d", &eng);
    
    calc(maths,sci,phy,eng);
    
}
int main()
{
    setdata();
    
}


*/

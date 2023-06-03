#include<stdio.h>
int main()
{
    int age;

    printf("Please Enter Your Age... : ");
    scanf("%d", &age);

    if(age>=18 && age<=65){
        printf("You are eligeble for vote..");
    }else if(age==17){
        printf("1 Year left for vote..");
    }else if(age==16){
        printf("2 Year left for vote..");
    }else if(age>65){
        printf("Yore age was not valid...");
    }else{
        printf("You are not eligeble for vote..");
    }

    return 0;

}

/* out put

Please Enter Your Age... : 19
You are eligeble for vote..

Please Enter Your Age... : 17
1 Year left for vote..

Please Enter Your Age... : 16
2 Year left for vote..

Please Enter Your Age... : 12
You are not eligeble for vote..

Please Enter Your Age... : 89
Yore age not valid...

*/
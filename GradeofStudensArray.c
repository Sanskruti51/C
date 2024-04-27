#include <stdio.h>

int main(){
    int stud[2];
    int avg;
    int t;
    printf("Enter the number of students: \n");
    scanf("%d",&t);
    while(t--){
            int sum=0;


    for(int i=0; i<3; i++){
        printf("Enter the student marks of subject %d\n", i+1);
        scanf("%d", &stud[i]);
        sum=(stud[i]+sum);
        
    }
    avg=sum/3;
    printf("The average of the student mark is: %d \n", avg);
    if(avg>=80){
        printf("Grade: A\n");
    }
    else if(avg<=79 && avg>=60){
        printf("Grade: B\n");
    }
    else if(avg<=59 && avg>=36){
        printf("Grade: C\n");
    }
    else{
        printf("Grade: D\n");
    }
    }

}
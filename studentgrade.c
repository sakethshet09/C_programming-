#include<stdio.h>
#include<stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5,total,avg,cgpa;
    char grade;

    printf("enter marks in sub 1:");
    scanf("%f",&m1);
    printf("enter the marks of sub 2:");
    scanf("%f",&m2);
    printf("enter the marks of sub 3:");
    scanf("%f",&m3);
    printf("enter the marks of sub 4:");
    scanf("%f",&m4);
    printf("enter the marks of sub 5:");
    scanf("%f",&m5);

    total=m1+m2+m3+m4+m5;
    avg=total/3;
    cgpa=avg/10;

    if(avg>=90)
    grade='A';
    
    else if(avg>=80)
    grade='B';

    else if(avg>=70)
    grade='c';

    else if(avg>=60)
    grade='D';
    else
    grade='F';
    
   
    printf("\ntotal marks=%f",total);
    printf("\naverage=%f",avg);
    printf("\ngrade=%c",grade);
    printf("\ncgpa=%f",cgpa);

    return 0;
}
#include<stdio.h>
int main(){
float percent,aggregate,m1,m2,m3,m4,m5;
printf("enter marks in 5 subjects");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
aggregate=(m1+m2+m3+m4+m5);
percent=(aggregate/500)*100;
printf("\n aggregate is = %.2f \n percent is = %.2f",aggregate,percent);



}
#include<stdio.h>
int main(){
int a;
printf("enter a 4 digit nmbr\n");
scanf("\n%d",&a);
int f=a/1000;
int l=a%10;
int sum=f+l;
printf("\n sum is = %d",sum);
return 0;
}
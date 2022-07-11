#include<stdio.h>
int main(){int a,range,high,low;
printf("enter nmbr\n");
scanf("%d",&a);
low=(a/10)*10;
high=low+10;
if (high<=100&&low>=50)
{ printf("\n bw 50 to 100");
 
}
if( a%7==0){
 printf("\ndivisibe byt 7");}


else
{printf("\n nor in range nor divisble");}
}
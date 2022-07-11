#include<stdio.h>
//#include<iostream>
//using namespace std;
int main()
{

int a=423,last,mid,first,res;
first=a/100;
mid=(a%100)/10;
last=a%10;
res=last*100+mid*10+first;
printf("%d",res);
}


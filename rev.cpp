#include<stdio.h>
int main(){
int n,rev=0,rem;
printf("enter nmbr");
scanf("%d",&n);
for(int i=n;i>0;i=i/10){
rem=i%10;
rev=rev*10+rem;
}
printf("\n reverse is %d and n is %d ",rev,n);
if (rev==n){
printf("\n %d is palindrome",n);
}

else{
printf("not palindrome");
}

}
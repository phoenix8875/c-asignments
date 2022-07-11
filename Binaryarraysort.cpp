#include<iostream>
using namespace std;
int main(){int temp;
int arr[]={0,1,1,0,1,0,1,0,1,0,1};
int len=sizeof(arr)/sizeof(int);
cout<<"before sorting"<<endl;
//cout<<arr[len-1];
for(int i=0;i<len;i++)
{
cout<<arr[i]<<" ";}


for(int i=0;i<len;i++){
if (arr[i]>=arr[i+1])
{arr[i+1]=temp;
arr[i+1]=arr[i];
arr[i]=temp;
}
}
cout<<"after sort"<<endl;
for(int i=0;i<len;i++)
{
cout<<arr[i]<<" ";}

}
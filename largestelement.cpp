#include<iostream>
using namespace std;
int main()
{
 int arr[10],x,y;
 cout<<"enter the size of array";
 cin>>x;
 cout<<"Enter the elements of array upto the spacing of"<<x<<"array elements";
 for(int i=0;i<x;i++){
 cin>>arr[i];
 y=arr[0];}
 for(int i=0;i<x;i++){
 if(y<arr[i])
 y=arr[i];
 } 
 cout<<"\n Largest number ="<<y;
 cout<<endl;
return 0;
}

#include<iostream> 
#include <bits/stdc++.h>
using namespace std;
bool search(int arr[], int n,int x){
 int low=0, high = n-1;
 while (low<= high)
 {
 int mid = (low +high)/2;
 if (arr[mid]==x)
 {
 return true;
 }
 else if (arr[mid]>x)
 {
 high=mid -1;
 }
 else if (arr[mid]<x)
 {
 low=mid+1;
 }
 
 
 }
 return false;
 
}
int main(){
 int arr[]={1,2,5,6,8,9,10,69,81};
 int n = sizeof(arr)/ sizeof(arr[0]);
 int x;
 cout<<"enter the searching element "<<endl;
 cin>>x;
 cout<<search(arr,n,x);
 return 0;
}

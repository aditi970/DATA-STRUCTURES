#include<iostream> 
#include <bits/stdc++.h>
using namespace std;
bool ds(int arr[],int n,int x){
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
 int n;
 cout << "Enter the size of the array : " << endl;
 cin >> n;
 int arr[n];
 cout << "enter the elements of the array : " << endl;
 for (int i = 0; i < n; i++)
 {
 cin >> arr[i];
 }
 cout << "Enter the searching element : " << endl;
 int x;
 cin >> x;
 cout << ds(arr, n, x);
 return 0;
}

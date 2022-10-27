#include<iostream> 
#include <bits/stdc++.h>
using namespace std;
void sort1(int arr[], int n)
{
 int a;
 for (int i = 0; i < n; i++)
 {
 for (int j = i + 1; j < n; j++)
 {
 if (arr[j] < arr[i])
 {
 a = arr[i];
 arr[i] = arr[j];
 arr[j] = a;
 }
 }
 }
}
void sort2(int arr[], int n)
{
 int a;
 for (int i = 0; i < n; i++)
 {
 for (int j = i + 1; j < n; j++)
 {
 if (arr[j] > arr[i])
 {
 a = arr[i];
 arr[i] = arr[j];
 arr[j] = a;
 }
 }
 }
}
int main(){
 int arr[]={1,5,6,7,8,9,10,12,11};
 int n = sizeof(arr)/sizeof(arr[0]);
 int choi;
 cout<<"Enter your choice for ascending order press 1 else press 2"<<endl;
 cin>>choi;
 switch (choi)
 {
 case 1:
 sort1(arr, n);
 for (int i = 0; i < n; i++)
 {
 cout << arr[i] << "\n";
 }
 break;
 case 2:
 sort2(arr, n);
 for (int i = 0; i < n; i++)
 {
 cout << arr[i] << "\n";
 }
 break;
 }
}

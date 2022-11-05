#include<bits/stdc++.h>
#include<ctime>
#include<stdlib.h>
using namespace std;
int partition(int arr[], int start, int end)
{
int pivot = arr[start];
int count = 0;
for (int i = start + 1; i <= end; i++) {
if (arr[i] <= pivot)
count++;
}
// Giving pivot element its correct position
int pivotIndex = start + count;
swap(arr[pivotIndex], arr[start]);
// Sorting left and right parts of the pivot element
int i = start, j = end;
while (i < pivotIndex && j > pivotIndex) {
while (arr[i] <= pivot) {
i++;
}
while (arr[j] > pivot) {
j--;
}
if (i < pivotIndex && j > pivotIndex) {
swap(arr[i++], arr[j--]);
}
}
return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
// base case
if (start >= end)
return;
// partitioning the array
int p = partition(arr, start, end);
// Sorting the left part
quickSort(arr, start, p - 1);
// Sorting the right part
quickSort(arr, p + 1, end);
}
void printArray(int arr[],int n)
{
 for (int i = 0; i < n; i++)
 cout << arr[i] << " ";
}
int main()
{
int ni,n,m;
 cout<<"Enter the size of the array: "<<endl;
 cin>>ni;
 cout<<"Enter the range between which the number has to be generated for array: "<<endl;
 cin>>n>>m;
 
 int arr[ni];
 
 srand(time(NULL));
 for(int i=0;i<ni;i++)
 {
 arr[i]=rand()%(m-n+1)+n;
 }
 double time_spent = 0.0;
 clock_t begin = clock();
 
 quickSort(arr, 0, ni - 1);
 cout << "Sorted array: \n";
 printArray(arr,ni);
 clock_t end = clock();
 time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 cout<<"\nThe elapsed time is "<<fixed<<time_spent<<setprecision(5)<<"seconds"<<endl;
return 0;
}

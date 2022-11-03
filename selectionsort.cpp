#include<bits/stdc++.h>
#include<stdlib.h>
#include<ctime>
using namespace std;
// function to swap the the position of two elements
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
// function to print an array
void printArray(int array[], int size) {
for (int i = 0; i < size; i++) {
cout << array[i] << " ";
}
5
cout << endl;
}
void selectionSort(int array[], int size) {
for (int step = 0; step < size - 1; step++) {
int min_idx = step;
for (int i = step + 1; i < size; i++) {
// To sort in descending order, change > to < in this line.
// Select the minimum element in each loop.
if (array[i] < array[min_idx])
min_idx = i;
}
// put min at the correct position
swap(&array[min_idx], &array[step]);
}
}
// main function
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
6
selectionSort(arr, ni);
cout << "Sorted array in Ascending Order:\n";
printArray(arr, ni);
clock_t end = clock();
time_spent += (double)(end - begin) /CLOCKS_PER_SEC;
cout<<"\nThe elapsed time is "<<fixed<<time_spent<<setprecision(5)<<"seconds"<<endl;
 return 0;
}

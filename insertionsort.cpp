#include <bits/stdc++.h>
#include<ctime>
#include<stdlib.h>
using namespace std;
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
int i, key, j;
for (i = 1; i < n; i++)
{
key = arr[i];
j = i - 1;
/* Move elements of arr[0..i-1], that are
greater than key, to one position ahead
of their current position */
while (j >= 0 && arr[j] > key)
{
arr[j + 1] = arr[j];
j = j - 1;
}
arr[j + 1] = key;
}
}
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
int i;
for (i = 0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
}
/* Main Function */
int main()
{
 int ni,n,m;
 cout<<"Enter the size of the array: "<<endl;
 cin>>ni;
 cout<<"Enter the range between which the number has to be generated for array: 
"<<endl;
 cin>>n>>m;
 int arr[ni];
 srand(time(NULL));
 for(int i=0;i<ni;i++)
 {
 arr[i]=rand()%(m-n+1)+n;
 }
 double time_spent = 0.0;
 clock_t begin = clock();
 
 insertionSort(arr, ni);
 cout << "Sorted array in Ascending Order:\n";
 printArray(arr, ni);
 clock_t end = clock();
 time_spent += (double)(end - begin) /CLOCKS_PER_SEC;
 cout<<"\nThe elapsed time is"<<fixed<<time_spent<<setprecision(5)<<"seconds"<<endl;
return 0;
}

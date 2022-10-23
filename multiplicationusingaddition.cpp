#include <iostream>
using namespace std;
int multiplyusingaddition(int n1, int n2)
{
int product;
 
 for(int i=1;i<=n2;i++){
 
 
 product+=n1 ; 
}
 return product ;
}
// Driver program to test above function
int main()
{
int a, b;
cout << "Enter two numbers: ";
 cin >> a >> b;
cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<multiplyusingaddition(a, 
b);
return 0;
}

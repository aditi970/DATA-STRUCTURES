#include <iostream>
using namespace std;
// Function to convert binary to decimal
int binaryToDecimal(int n)
{
int num = n;
int value = 0;
int base = 1;
int temp = num;
while (temp) {
int lastdigit = temp % 10;
temp = temp / 10;
value += lastdigit * base;
base = base * 2;
}
return value;
}
// Driver program to test above function
int main()
{
int num;
cout <<"Enter Binary Number :- \t";
cin>>num;
cout << binaryToDecimal(num) << endl;
}

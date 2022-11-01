#include <iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c++;
    	}
    }
    if(c==2)
    {
    	cout<<"the number is prime \n";
    }
    else
    {
    	cout<<"The number entered is not prime";
    }
	return 0;
}

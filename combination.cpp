#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
int fact=1;
for(int i=1; i<=n;i++) {
fact=fact*i; }
return fact;}
int main(){
int n,r;
cout<<"Enter the number n :"<<endl;
cin>>n;
cout<<"Enter the number r :"<<endl;
cin>>r;
int nCr=factorial(n)/((factorial(n-r))*(factorial(r)));
cout<<"Combination of "<<n<<"C"<<r<<" is "<<nCr;
}


#include<iostream>
using namespace std;
int factorial(int a){
    int b=1;
    for(int i=1;i<=a;i++){
        b=b*i;
    }
    return b;
}
int combination(int n , int r){
    int x=n-r;
    int N=factorial(n);
    int R=factorial(r);
    int X = factorial(x);
}
int main(){
    int n,i,j,k,a,b;
    cout<<"Enter no.: ";
    cin>>n;

    for(i=0;i<n;i++){

        for (k=0;k<=i;k++){
            cout<<factorial(i)/((factorial(i-k)*factorial(k)));
        }
        cout<<endl;
    }
}

//butterfly pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter no.:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
                }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        }
}

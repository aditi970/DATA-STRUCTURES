#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS";
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:";
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"REPEATING ELEMENTS:";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){


            }
             cout<<a[i];
            return 0;
        }
    }
}

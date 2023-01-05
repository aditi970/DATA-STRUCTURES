#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"ENTER THE NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER THE DATA: "<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"ENTER THE VALUE:"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        if(k==a[i]){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;

}

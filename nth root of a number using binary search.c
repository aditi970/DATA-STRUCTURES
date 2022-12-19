#include<bits/stdc++.h>
using namespace std;


double multiply(double mid,int n){
    double ans = 1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }
    return ans;
}
int main(){
   // double eps //= le-7;
    double x,eps;
    cin>>x;
    int n;
    double lo = 1,hi=x,mid;
    while(hi-lo>eps){
        mid=(hi+lo)/2;
        if(multiply(mid,n)<x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }
    cout<<setprecision(10)<<lo<<"\n"<<hi<<endl;
    cout<<pow(x,1.0/2)<<endl;
}

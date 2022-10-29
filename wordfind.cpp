#include<iostream> 
#include <bits/stdc++.h>
using namespace std;
bool word(string st,string f){
 int a = st.size();
 for (int i = 0; i < a; i++)
 {
 for (int j = 0; j < a ; j++)
 {
 if (st[i] == f[j])
 {
 return true;
 }
 }
 
 
 }
 return false;
}
int main(){
 string st = "Aman is great";
 cout<<"enter the founding word :"<<endl;
 string f ;
 cin>>f;
 cout<<word(st,f);
 return 0;
}

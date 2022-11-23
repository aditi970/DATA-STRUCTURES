using namespace std;
int main(){
    int n;
    cout<<"ENTER NUMBER OF ELEMENTS:"<<endl;
    cin>>n;
    int a[n];
    cout<<"ENTER DATA:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"UNIQUE ELEMENT OF AN ARRAY:"<<endl;
    for(int i =0;i<n;i++){
            int j;
        for(j=0;j<i;j++)
            if(a[i]==a[j])
            break;
            if(i==j)
                cout<<a[i];
 }
return 0;
}

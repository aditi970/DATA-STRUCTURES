#include <iostream>
using namespace std;
 int main()
{
	string S;
   char a,c;
   int i,l;
   cout<<"ENTER THE STRING\n";
   cin>>S;
   cout<<"enter the character to be replaced\n";
   cin>>a;
   cout<<"enter the character by which it has to be replaced\n";
   cin>>c;
   l=S.length();
   for(i=0;i<l;i++)
   {
   	if(S[i]==a)
   	{
   		S[i]=c;
   	}
   }
   cout<<"The new string is "<<S;
	return 0;
}

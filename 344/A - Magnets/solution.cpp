#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   vector<string>s(n);
 
   for ( int i = 0 ; i< n ; i++)
   {
     cin>>s[i];
 
   }
 
   int c = 0;
 
   for ( int i = 0 ; i< n ; i++)
   {
     if ( s[i]==s[i+1])
     c=c;
     else
     c++;
   }
 
   cout<<c;
 
 
}
#include <iostream>
#include <string>
using namespace std;;
 
 
int main()
{
   string a,b;
   cin>>a>>b;
   for ( int i = 0 ; i < a.size() ; i++ )
    {
        if ( a[i] - '0'+ b[i] - '0'==1)
        cout<<'1';
        else
        cout<<'0';
 
    }
 
}
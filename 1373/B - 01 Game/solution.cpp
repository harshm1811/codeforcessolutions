#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
 
    {
        string s ;
        cin>>s;
        int z=0 , o = 0 ;
        for( char c:s)
       {
        if ( c=='0')
        z++;
        else
        o++;}
 
        int size = min(z,o);
 
        if ( size%2==0)
        cout<<"NET"<<"
";
        else
        cout<<"DA"<<"
";
    
    }
    return 0;
}
#include <iostream>
using namespace std;
 
int main()
{
    string s , t;
    int w =0;
    cin>>s>>t;
   if (s.size()==t.size())
    {for ( int i =0 ; i<s.size() ; i++)
      {if ( s[i]==t[t.size()-i - 1])
        w++;
        else
        w=w;
    }
        if (w==t.size())
        cout<<"YES";
        else
        cout<<"NO";}
        else
        cout<<"NO";
        
 
 
 
    
    }
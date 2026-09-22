#include <iostream>
#include <string>
using namespace std;
 
int main ()
{
    string s;
    cin>>s;
    int c = 0;
    int i;
    int h=0;
    for (  i = 0; i< s.size() ; i++)
    {
        if (s[i]=='h')
           { c++;
            h=i;
            break
            ;}
    }
    for ( i=h+1 ; i<s.size(); i++)
    { 
        if (s[i ]=='e')
       { c++;
        h=i;
        break;}
    }
   
    for (i=h+1 ; i<s.size(); i++)
    { 
        if (s[i ]=='l')
        {c++;
            h=i;
        break ;}
    }
    for (  i=h+1 ; i<s.size(); i++)
    { 
        if (s[i ]=='l')
        {c++;
            h=i;
        break;}
    }
    for (i=h+1 ; i<s.size(); i++)
    { 
        if (s[i ]=='o')
        {c++;
        break;} 
    }
 
    if (c==5)
    cout<<"YES";
    else
    cout<<"NO";
 
}
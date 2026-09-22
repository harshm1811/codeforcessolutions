#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
       }
        int sum = 0 ;
    for(int j=0;j<n;j++)
    {
       
        sum = sum + a[j];
    }
    if ( sum%2==1)
    {
        cout<<"YES"<<"
";
    }
    else
    {
        for( int m = 0 ; m<n ; m++)
        {
            a[m]=k;
        }
        if((k*n)%2==1)
        {
            cout<<"NO"<<"
";
        }
        else
        {
            cout<<"YES"<<"
";
        }
    }
    } 
    }
   
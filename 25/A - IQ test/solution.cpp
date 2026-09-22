#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<long long>a(n);
    int x= 0 , y = 0 ;
 
    for ( int i = 0 ; i< n ; i++)
    {
        cin>>a[i];
        if ( a[i]%2==0)
        x++;
        else
        y++;
 
 
    }
    if ( x > y )
    {
        for ( int i = 0 ; i<n ; i++)
        {
            if ( a[i]%2!=0)
            cout<<i+1;
        }
    }   
    else{
        for ( int i = 0 ; i<n ; i++)
        {
            if ( a[i]%2==0)
            cout<<i+1;
        }
    } 
 
 
}
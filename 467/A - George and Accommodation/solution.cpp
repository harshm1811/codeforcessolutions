#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n,r=0;
    cin>>n;
    vector<int>p(n),q(n);
 
    for( int i=0 ; i<n; i++)
    { cin>>p[i]>>q[i];
    }
 
    for ( int i=0 ; i<n ; i++)
    
    { if ((q[i]-p[i])>=2)
        r++;
        else
        r=r;
 }
 cout<<r;
}
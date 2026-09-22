#include <iostream>
#include <vector>
using namespace std;;
 
 
int main()
{   
    int n, h;
    cin>>n>>h;
    int w =0;
    vector<int>a(n);
    for ( int i =0 ; i<n ; i++)
    {
        cin>>a[i];
 
    }
    for ( int i = 0 ; i <n ; i++)
    {
        if (a[i]>h)
        w=w+2;
        else
        w++;
}
    cout<<w;
    }
 
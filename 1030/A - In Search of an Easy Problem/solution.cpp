#include <iostream>
#include <vector>
using namespace std;
 
int main()
{   int n;
    cin>>n;
 
    vector<int>a(n);
    int sum = 0;
 
    for ( int i =0 ; i<n ; i++)
    {   
        cin>>a[i];
        sum=sum+a[i];
    }
    if ( sum>0)
    cout<<"HARD";
    else
    cout<<"EASY";
}
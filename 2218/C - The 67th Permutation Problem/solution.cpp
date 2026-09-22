#include <iostream>
#include <vector>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    vector<int>v1;
    int l=1 , r= 3*n;
    while(l<r)
    {
        v1.push_back(l);
        v1.push_back(r-1);
        v1.push_back(r);
        l++;
        r=r-2;
    }
 
    for ( int x:v1)
    cout<<x<<" ";
    cout<<"
";
    }
 
 }
 
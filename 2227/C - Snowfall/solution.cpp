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
       
        vector<int> v2 , v3 , v6 ,v;
        for(int i = 0 ; i<n ; i++)
        {
            int x;
            cin>>x;
 
            if(x%6==0)
            v6.push_back(x);
            else if(x%2==0)
            v2.push_back(x);
            else if(x%3==0)
            v3.push_back(x);
            else
            v.push_back(x);
        }
 
        for(int x:v2)
        {
            cout<<x<<" ";
        }
        for(int x:v)
        {
            cout<<x<<" ";
        }
        for(int x : v3)
        {
            cout<<x<<" ";
        }
        for(int x: v6)
        {
            cout<<x<<" ";
        }
    
    }
    return 0;
}
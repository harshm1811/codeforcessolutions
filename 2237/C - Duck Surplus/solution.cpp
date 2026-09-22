#include <iostream>
#include <vector>
#include <map>
#include<climits>
#include<cmath> 
#include <algorithm>
#include <string>
#include <unordered_map>
#include <set>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i = 0 ; i<n;i++)
        {
            cin>>a[i];
        }
        long long sum = a[0];
        long long ans = a[0];
        for ( int i = 1 ; i<n ;i++ )
        {
            if(a[i]<sum)
            sum+=a[i];
            else
            sum = a[i];
            
            ans = max(ans,sum);
 
    }
        cout<<ans<<"
";
    }
    return 0;
}
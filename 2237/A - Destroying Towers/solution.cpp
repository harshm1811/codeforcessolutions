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
        vector<int> a(n);
        for(int i = 0 ; i<n;i++)
        {
            cin>>a[i];
        }
        int m = a[0];
        long long sum=0;
        for(int i = 0 ; i<n;i++)
        {  
            m= min(m,a[i]);
            sum+=m;
        }
        cout<<sum<<"
";
    }
    return 0;
}
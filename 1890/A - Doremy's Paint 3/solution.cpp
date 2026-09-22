#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        map<long long,long long> mp;
        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
           mp[a[i]]++;
        }
        if(mp.size()>=3)
        {
            cout<<"NO
";
        }
        else
        {
        long long freq1 = mp.begin()->second;
        long long freq2 = mp.rbegin()->second;
        if(freq1==freq2)
        {
            cout<<"YES
";
        }
        else if(n%2==1 && abs(freq1-freq2)==1)
        cout<<"YES
";
        else
        cout<<"NO
";
    }
 
 
 
    }
    return 0;
}
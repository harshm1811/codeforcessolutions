#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int i=1;
    vector<int> v;
 
    if(n%10!=0)
        v.push_back(n%10);
 
    n=n/10;
    int p=10;
    while(n>0){
        if(n%10!=0)
            v.push_back((n%10)*p);
        i++;
        p*=10;
        n=n/10;
    }
 
    cout<<v.size()<<nl;
    for(auto x:v)
        cout<<x<<" ";
    cout<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--)
        solve();
 
    return 0;
}
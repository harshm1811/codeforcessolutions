#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k,m=9;
    cin>>n>>k;
    vector<int> v={5,15,30,50,75,105,140,180,225};
        auto it=upper_bound(v.begin(),v.end(),240-k);
    if(k<=15){
        cout<<min(n,m);
    }else{
        int in=it-v.begin();
        cout<<min(in,n)<<'
';
    }
}
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    return 0;
}
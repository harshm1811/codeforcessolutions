#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
 
    vector<ll> a(n);
 
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
 
    ll positive_count=0;
    ll negative_count=0;
 
    for(int i=0;i<n;i++) {
        if(a[i]==1)
            positive_count++;
        else
            negative_count++;
    }
 
    ll operations=0;
 
    while(positive_count<negative_count || negative_count%2==1) {
        operations++;
        positive_count++;
        negative_count--;
    }
 
    cout<<operations<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}
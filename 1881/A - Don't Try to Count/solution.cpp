#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n, m;
    cin>>n>>m;
 
    string x,s;
    cin>>x>>s;
 
    for(int op=0;op<=6;op++) {
        if(x.find(s)!=string::npos) {
            cout<<op<<nl;
            return;
        }
 
        x+=x;
    }
 
    cout<<-1<<nl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}
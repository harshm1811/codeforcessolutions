#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    int blocks =1;
    for (int i = 1; i < n; i++)
    {
        if(s[i-1]!=s[i]){
            blocks++;
        }    }
        if(blocks==2){
            cout<<2<<nl;
        }
        else {cout<<1<<nl;}
    
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
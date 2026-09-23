#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    char a[10][10];
 
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            cin>>a[i][j];
        }
    }
 
    int ans=0;
 
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++) {
            if(a[i][j]=='X'){
                int layer = min({i,j,9-i,9-j});
                ans+=layer+1;
            }
        }
    }
 
    cout<<ans<<nl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) {
        solve();
    }
}
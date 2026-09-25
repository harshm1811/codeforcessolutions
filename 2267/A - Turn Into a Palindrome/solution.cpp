#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            if(s[i]==c || s[n-1-i]==c){
                count++;
            }else{
                count+=2;
            }
        }
    }
    cout<<count<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
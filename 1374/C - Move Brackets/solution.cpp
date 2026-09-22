#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int count=0;
    vector<char> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int open=0;
    for(int i=0;i<n;i++){
        if(v[i]=='('){
            open++;
        }else{
            open--;
        }
        if(open<0){
            count++;
            open=0;
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
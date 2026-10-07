#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    string s;
    cin>>n>>s;
    vector<int> v;
    vector<int> p;
    
    for(int i=1;i<=n;i++){
        if(s[i-1]=='1'){
            v.push_back(i);
        }else if(s[i-1]=='2'){
            if(!v.empty()){
                p.push_back(v.back());
                v.pop_back();
            }else{
                p.push_back(i);
            }
        }else{
            p.push_back(i);
        }
    }
    
    set<int> st(p.begin(),p.end());
    cout<<n-st.size()<<nl;
    
    for(int i=1;i<=n;i++){
        if(!st.count(i))
            cout<<i<<" ";
    }
    cout<<nl;
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
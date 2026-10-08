#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    string s;
    vector<int> v(26,0);
    for(int i=0;i<2;i++){
        cin>>s;
        for(auto c:s){
            v[c-'A']++;
        }
    }
    
        cin>>s;
        for(auto c:s){
            v[c-'A']--;
        
    }
    bool possible = true;
    for(int i=0;i<v.size();i++){
        if(v[i]!=0) possible=false;
    }
    if(possible){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
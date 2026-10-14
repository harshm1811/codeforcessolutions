#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int a=1;
    string s;
    cin>>s;
    bool flag1=false,flag2=false;
    for(int i=0;i<s.size()-2;i++){
        if((s[i]==s[i+2])){
            if(s[i]==s[i+1])
                flag1=true;
            else
                flag2=true;
            }
        }
    
    if(flag1){
        a++;
    }
    if(flag2){
        a++;
    }
    cout<<a<<nl;
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
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;   
    unordered_set<char> s;
    for(int i=0;i<n;i++){
        char x;
        cin>>x;
        char A = tolower(x);
        s.insert(A);
    }
    if(n<26) cout<<"NO";
    else{
        if(s.size()==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
   
    return 0;
}
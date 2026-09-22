#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    
    string s;
    getline(cin,s);
    unordered_set<char> st;
    for( char c:s){
        if(c!='{' && c!='}'&& c!=','&&c!=' ')
        st.insert(c);
        }
    
    cout<<st.size();
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 
        solve();
    
    return 0;
}
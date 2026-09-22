#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int j=n-1;
    int count=0;
    int rem=n;
    for(int i=1;i<=rem;i++){
        if(v[j]*i>d){
            count++;
            j--;
            rem-=i;
            i=0;
            if(rem==0) break;
        }
    }
    cout<<count<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
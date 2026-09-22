#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,m;
    cin>>n>>m;
    int f = 1;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int i=0;i<m;i++){
                cout<<"#";
            }
        }
        else{
            if(f){
                for(int i=0;i<m-1;i++){
                    cout<<".";
                }
                cout<<"#";
                f=0;
            }
            else{
                cout<<"#";
                for(int i=0;i<m-1;i++){
                    cout<<".";
                }
                f=1;
            }
        }
        cout<<'
';
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
 
    return 0;
}
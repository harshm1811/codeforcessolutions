#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    ll a,b;
    cin>>a>>b;
    int count=0;
    while(a!=b){
        if(a>b){
            if(a%8==0&&a/8>=b){
                a=a/8;
                count++;
            }else if(a%4==0&&a/4>=b){
                a=a/4;
                count++;
            }else if(a%2==0&&a/2>=b){
                a=a/2;
                count++;
            }else{
                count=-1;
                break;
            }
        }else{
            if(b>=8*a){
                a=8*a;
                count++;
            }else if(b>=4*a&&b<8*a){
                a=4*a;
                count++;
            }else if(b>=2*a&&b<4*a){
                a=2*a;
                count++;
            }else{
                count=-1;
                break;
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
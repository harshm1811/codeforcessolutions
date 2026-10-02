#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    vector<int> s(n);
    int a = 0;
 
    for (int i = 0; i < n; i++) {
        int y;
        cin>>y;
 
        a+= y;
        s[i]=a;
    }
 
    int q;
    cin>>q;
 
    while(q--) {
        int x;
        cin>>x;
 
        auto it=lower_bound(s.begin(),s.end(), x);
 
        cout<<it-s.begin()+1<<'
';
    }
}
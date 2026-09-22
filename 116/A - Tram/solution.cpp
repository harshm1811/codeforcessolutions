#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int curr =0;
    int mx=0;
    for(int i = 0 ; i<n;i++){
        int a,b;
        cin>>a>>b;
       curr-=a;
       curr+=b;
       mx=max(mx,curr);
    }
    cout<<mx;
    return 0;
}
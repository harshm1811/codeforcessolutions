#include <iostream>
using namespace std;
 
int main() {
    long long t,x,y,z;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x>>y;
        z=2*x;
        while(z<y){
            if(y%z!=0){
                cout<<"YES
";
                break;
            }
            z+=x;
        }
        if(z>=y){
            cout<<"NO
";
        }
    }
    return 0;
}
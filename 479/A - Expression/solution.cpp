#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    
    int a , b ,c ;
    cin>>a>>b>>c;
 
    int x=0,y=0,z=0,w=0,s=0;
 
    x=a+b*c;
    y=a*(b+c);
    z=a*b*c;
    w=(a+b)*c;
    s=a+b+c;
 
    long long m = max(max(x,y),max(max(z,w),s));
 
    cout<<m;
    return 0;
}
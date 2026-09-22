#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while( t--)
    {
        int a,b,c,d,e,f,g;
        cin>>a>>b>>c>>d>>e>>f>>g;
        int A= max({a,b,c,d,e,f,g});
        cout<< 2*A - a - b - c - d - e -f-g<<"
";
 
    }
 
    return 0;
}
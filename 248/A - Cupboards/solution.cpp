#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int suma=0; int sumb=0;
    int a[n];
    int b[n];
    for(int i = 0 ; i<n ; i++){
        cin>>a[i]>>b[i];
        suma+=a[i];
        sumb+=b[i];
    }
    int sum = min(suma,n-suma)+min(sumb,n-sumb);
    cout<<sum;
    return 0;
}
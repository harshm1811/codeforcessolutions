#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n <= 2)
            cout << 0 << '
';
        else
            cout << (n - 1) / 2 << '
';
    }
}
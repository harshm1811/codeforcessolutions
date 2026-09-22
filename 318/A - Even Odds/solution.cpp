#include <iostream>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
 
    long long N = (n + 1) / 2;
 
    if (k <= N)
        cout << 2 * k - 1;
    else
        cout << 2 * (k - N);
}
#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
        int count2 = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 2) count2++;
        }
 
        if (count2 % 2 != 0) {
            cout << -1 << "
";
            continue;
        }
 
        int need = count2 / 2;
        int curr = 0;
 
        for (int i = 0; i < n; i++) {
            if (a[i] == 2) curr++;
            if (curr == need) {
                cout << i + 1 << "
";
                break;
            }
        }
    }
 
    return 0;
}
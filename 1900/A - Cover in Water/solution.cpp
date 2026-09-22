#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        bool threeDots = false;
        int dotCount = 0;
 
        for(int i = 0; i < n; i++) {
            if(s[i] == '.') {
                dotCount++;
            }
        }
 
        for(int i = 0; i < n - 2; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                threeDots = true;
                break;
            }
        }
 
        if(threeDots) {
            cout << 2 << endl;
        } else {
            cout << dotCount << endl;
        }
    }
 
    return 0;
}
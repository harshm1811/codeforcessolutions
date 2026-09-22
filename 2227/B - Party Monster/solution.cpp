#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        int open = 0, close = 0;
 
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
 
        if (open == close)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}
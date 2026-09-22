#include <iostream>
using namespace std;
 
int main() {
    int y;
    cin >> y;
 
    while (true) {
        y++;  // go to next year
        string s = to_string(y);
 
        // check if all digits are different
        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] &&
            s[1] != s[2] && s[1] != s[3] &&
            s[2] != s[3]) {
            
            cout << y;
            break;
        }
    }
 
    return 0;
}
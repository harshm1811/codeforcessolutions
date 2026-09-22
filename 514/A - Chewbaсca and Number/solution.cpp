#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    for (int i = 0; i < s.size(); i++) {
       
        {int d = s[i] - '0';
           
        int nd = min(d, 9 - d);
 
        if (i == 0 && d == 9)
            continue;
 
        s[i] =nd + '0';}
 
    }
 
    cout << s << endl;
    return 0;
}
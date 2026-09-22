#include <iostream>
#include <set>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    set<char> distinct;
 
    // Store all unique characters
    for (char c : s) {
        distinct.insert(c);
    }
 
    // Check count of distinct characters
    if (distinct.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
 
    return 0;
}
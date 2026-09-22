#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<string> words(n);
 
 
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
 
  
    for (int i = 0; i < n; i++)
    {
        string s = words[i];
 
        if (s.size() <= 10)
            cout << s << endl;
        else
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << '
';
    }
}
 
 
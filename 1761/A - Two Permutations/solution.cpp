#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
 
        if (n == 1)
        {
            cout << "Yes
";
        }
        else
        {
            if (n - (a + b) >= 2)
            {
                cout << "Yes
";
            }
            else if(n==a && n==b)
            {
                cout << "Yes
";
            }
            else
            cout<< "No
";
        }
    }
 
    return 0;
}
#include <iostream>
using namespace std;
 
int main() {
    int x, row, col;
 
    // 5x5 matrix input
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> x;
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }
 
    // Moves to bring 1 to center (3,3)
    cout << abs(row - 3) + abs(col - 3);
 
    return 0;
}
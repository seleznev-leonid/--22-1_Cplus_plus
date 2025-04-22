#include <iostream>
using namespace std;

int main()
{
    int x, y, max;
    cin >> x >> y;
    (x > y) ? cout << x : cout << y << endl; // 1
    max = (x > y) ? x : y;    // 2
    cout << max << endl;
    return 0;
}

(a + 0.12) / 6  
x && y || !z  
(t * sin(x) - 1.05e4) / ((2 * k + 2) * (2 * k + 3))
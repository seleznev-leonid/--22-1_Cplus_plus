#include <iostream>
using namespace std;

int main()
{
    int a = 100, b;
    float c = 4.5, d;
    d = a/c;    // 1 - 6e3 nomepu movности
    cout << "d = " << d << endl;
    b = a/c;    // 2 - c nomepel movности
    cout << "b = " << b << endl;
    return 0;
}
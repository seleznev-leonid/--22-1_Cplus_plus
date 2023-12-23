/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//switch пример
int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1: cout << "понедельник"; break;
        case 2: cout << "вторник"; break;
        case 3: cout << "среда"; break;
        case 4: cout << "четверг"; break;
        case 5: cout << "пятница"; break;
        case 6: cout << "суббота"; break;
        case 7: cout << "воскресенье"; break;
        default: cout << "вы ошиблись";
    }
    return 0;
}

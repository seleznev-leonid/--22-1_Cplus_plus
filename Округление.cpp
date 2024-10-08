// - Первое число будет выведено с правым выравниванием.
// - Второе число будет округлено до третьего знака после запятой.
// - Третье число будет иметь знак `-` слева, а само число будет выровнено внутри 10-символьного поля.

// ### Заключение

// Эта программа демонстрирует использование манипуляторов C++ для управления форматированием чисел при выводе.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "1." << setw(10) << -23.4567 << endl;
    cout<<"2." << setw(10) << setprecision (3) << -23.4567 << endl;
    cout<<"3." << setw(10) << internal << -23.4567 << endl;
    return 0;
}

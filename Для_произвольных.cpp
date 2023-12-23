/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;








// 1.Для произвольных ...

int main()
{
    float x,y;
    cout << "x : = ";
    cin >> x;
    if (!x || x < -1) // проверка условия неопределенности функции
      cout << "Функция не определена" << endl;
    else
      {
          y = 1/x+sqrt(x+1);
          cout << "x = " << x << "\t" << "y = " << y << endl;
      }
    return 0;
}

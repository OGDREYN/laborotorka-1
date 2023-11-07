using namespace std; 
#include <iostream>

int main()
{
    setlocale(0, "");
    int a;
    int b;
    int f;
    cout << "введите первое число" << '\n';
    cin >> a;
    cout << "введите второе число" << '\n';
    cin >> b;
    int c = a * b;
    cout << "Введите ответ"; '\n';
    cin >> f;
    if (f == a * b)
    {
        cout << "Верно";
    }
    else
        cout << "не правильно , верно :" << a * b;
}

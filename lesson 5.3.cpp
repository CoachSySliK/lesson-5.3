#include <iostream>

using namespace std;

int main()
{
    int year;
    
    cout << "Введите год: \n";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Високосный";
                return 0;
            }
            cout << "Не високосный";
            return 0;
        }
        cout << "Високосный";
        return 0;
    }
    else {
        cout << "Не високосный";
    }
    return 0;
}
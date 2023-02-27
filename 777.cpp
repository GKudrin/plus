#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++) {
        cout << 5 * i << endl;
    }
    
    int i = 0;
    while (true) {
        cout << "Введите число:" << endl;
        cin >> i;
        if (i > 7) {
            cout << "Больше 7" << endl;
        } else if (i < 7) {
            cout << "Меньше 7" << endl;
        } else if (i == 7) {
            break;
        }
        
        if (i > 10) {
            cout << "Больше 10" << endl;
        } else if (i < 10) {
            cout << "Меньше 10" << endl;
        }
        
        if (i % 2 == 0) {
            cout << "Делится на 2" << endl;
        } else {
            cout << "Не делится на 2" << endl;
        }
        
        if (i % 3 == 0) {
            cout << "Делится на 3" << endl;
        } else {
            cout << "Не делится на 3" << endl;
        }
        
    }
}


#include <iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cin >> num1;
    cin >> num2;
    
    if (num1 > num2) {
        cout << "Больше";
    } else if (num1 < num2) {
        cout << "Меньше";
    } else {
        cout << "Равны";
    }

    return 0;
}

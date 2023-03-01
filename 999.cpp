#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    int min, max, sum, curr;
    float avg;
    min = INT_MAX;
    max = INT_MIN;
    
    cout << "Введите число элементов:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Введите число:";
        cin >> curr; 
        if (min > curr) {
            min = curr;
        }
        if (max < curr) {
            max = curr;
        }
        sum += curr;
    }
    avg = float(sum) / float(n);
    cout << "Минимальное " << min << endl;
    cout << "Максимальное " << max << endl;
    cout << "Сумма " << sum << endl;
    cout << "Среднее арифметическое " << avg << endl;
}


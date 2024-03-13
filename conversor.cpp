#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 + 32;

    cout << "A temperatura em Celsius: " << celsius << endl;
    cout << "A temperatura em Fahrenheit: " << fahrenheit << endl;

    return 0;
}

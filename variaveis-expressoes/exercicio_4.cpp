
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, expoente;
    cout << "Digite o valor da base: ";
    cin >> base;
    cout << "Digite o valor do expoente: ";
    cin >> expoente;
    cout << "O resultado de: " << base << "^" << expoente << "=" << pow(base, expoente);
    return 0;
}

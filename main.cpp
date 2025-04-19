#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Jednoducha kalkulacka (2 cisla)\n";
    cout << "Zadejte prvni cislo: ";
    cin >> a;
    cout << "Zadejte operaci (+, -, *, :, %, ^): ";
    cin >> op;
    cout << "Zadejte druhe cislo: ";
    cin >> b;

    double vysledek;
    bool valid = true;

    switch (op) {
        case '+':
            vysledek = a + b;
            break;
        case '-':
            vysledek = a - b;
            break;
        case '*':
            vysledek = a * b;
            break;
        case ':': // deleni
        case '/':
            if (b == 0) {
                cout << "Chyba: deleni nulou!\n";
                valid = false;
            } else {
                vysledek = a / b;
            }
            break;
        case '%': // zbytek po deleni
            if (b == 0) {
                cout << "Chyba: deleni nulou!\n";
                valid = false;
            } else {
                vysledek = fmod(a, b);
            }
            break;
        case '^': // exponent
            vysledek = pow(a, b);
            break;
        default:
            cout << "Neznama operace.\n";
            valid = false;
    }

    if (valid) {
        cout << "\n" << a << " " << op << " " << b << " = " << vysledek << "\n";
    }

    return 0;
}

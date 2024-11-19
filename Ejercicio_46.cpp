// par o impar
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"spanish");
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El número ingresado es par." << endl;
    } else {
        cout << "El número ingresado es impar." << endl;
    }

    return 0;
}


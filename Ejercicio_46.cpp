// par o impar
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"spanish");
    int numero;
    cout << "Ingrese un n�mero entero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El n�mero ingresado es par." << endl;
    } else {
        cout << "El n�mero ingresado es impar." << endl;
    }

    return 0;
}


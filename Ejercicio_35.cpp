 // C�lculo del �rea del trapecio
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL,"spanish");
    double baseMayor, baseMenor, altura;
    cout << "Ingrese la longitud de la base mayor: ";
    cin >> baseMayor;
    cout << "Ingrese la longitud de la base menor: ";
    cin >> baseMenor;
    cout << "Ingrese la altura: ";
    cin >> altura;
    double area = (baseMayor + baseMenor) * altura / 2.0;
    cout << "El �rea del trapecio es: " << area << endl;
    return 0;
}

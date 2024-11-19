#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"spanish");
    float n1, n2, n3, n4, n5, n6, promedio;
    cout << "Digite las 6 calificaciones separadas por un espacio: "<< endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    promedio = (n1 + n2 + n3 + n4 + n5 + n6) / 6;
    cout.precision(2);
    cout << fixed;
    cout << "Su promedio es: " << promedio << endl;
    if (promedio >= 7) {
        cout << "Usted aprobó." << endl;
    } else {
        cout << "Usted reprobó." << endl;
    }
    return 0;
}


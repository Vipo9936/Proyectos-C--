    // Switch para determinar el día de la semana
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Programa dia de la semana" << endl;
    cout << "Digite un numero: ";
    cin >> n;
    switch (n) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "Dato no valido" << endl;
    }

    return 0;
}


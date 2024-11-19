// Switch para verificar si es vocal
#include <iostream>
using namespace std;
int main() {
    char vo;
    cout << "Digite un caracter: ";
    cin >> vo;
    switch (vo) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "Su caracter es una vocal y es: " << vo << endl;
            break;
        default:
            cout << "El caracter que ingresó no es una vocal." << endl;
    }
    return 0;
}


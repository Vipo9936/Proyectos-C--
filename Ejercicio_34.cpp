// Condicional if-else para verificar si es vocal
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
     setlocale(LC_ALL,"spanish");
	char vo;
    cout << "Digite un caracter: ";
    cin >> vo;  
    if(vo == 'a' || vo == 'A' || vo == 'e' || vo == 'E' || vo == 'i' || vo == 'I' || vo == 'o' || vo == 'O' || vo == 'u' || vo == 'U') {
        cout << "Su caracter es una vocal y es: " << vo << endl;
    } else {
        cout << "El caracter que ingresó no es una vocal." << endl;
    }

    return 0;
}

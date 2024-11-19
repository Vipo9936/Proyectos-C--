//Calcular el iva de un producto
#include <iostream>
using namespace std;
int main() {
     float iv,pro;
	cout << "Calculadora para el iva de un producto:" << endl;
    cout<<"Digite el precio de su producto: "<< endl;
	cin >> pro;
	iv = (pro*.16);
    cout<<"El iva es: "<<iv<<endl;
    return 0;
}


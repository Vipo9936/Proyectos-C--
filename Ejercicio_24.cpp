//ciclo while tablas de multiplicar por usuario
#include <iostream>
using namespace std;
int main() {
    int i=1,n;
    cout << "Tablas de multiplicar" << endl;
    cout << "Ingrese un valor a multiplicar" << endl;
    cin >>n;
	while (i<=10){
		cout << n <<" * "<< i<<" = "<<n*i<< endl;
        i++;
    }
    return 0;
}

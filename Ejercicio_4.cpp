//Calculadora para el area de un circulo
#include <iostream>
#include <math.h>
using namespace std;
int main() {
     float area,r;
     double elevado;
    cout<<"Calculadora para el area de un circulo"<< endl;
    cout<<"Digite el radio: "<< endl;
	cin >> r;
	elevado= pow(r,2);
	area = (elevado*3.14);
    cout<<"El area es: "<<area<<endl;
    return 0;
}


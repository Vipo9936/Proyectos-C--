//ciclo do while tabla segun el usuario
#include <iostream>
using namespace std;
int main() {
int i = 1,d;
cout << "Ingrese un valor a multiplicar: " << endl;
cin>>d;
cout << "Tabla del: " <<d<< endl;
do {	
cout <<d<<" * "<<i<<" = "<<d*i<<endl;
i++;
} while (i <= 10);
return 0;
}

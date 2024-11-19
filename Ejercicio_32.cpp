//ciclo do while todas las tablas de multiplicar
#include <iostream>
using namespace std;
int main() {
int i=1;
do{
int m =1;
cout << "Tabla del : "<<i<<endl;
do{
cout <<i<<" * "<<m<<" = "<< i*m <<"\n";
++m;	
}while(m<=10);
cout <<"\n"<<endl;
++i;
}while(i<=10);
return 0;
}

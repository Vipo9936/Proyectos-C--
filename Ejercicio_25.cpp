//ciclo while todas las tablas de multiplicar
#include <iostream>
using namespace std;
int main() {
int i=1;
while (i<=10){
cout << "Tabla del : "<<i<<endl;
cout <<endl;
int b=1;
while(b<=10){
cout << i <<" * "<< b<<" = "<<b*i<< endl;	
b++;
}
cout <<"\n"<<endl;
i++;
}
return 0;
}

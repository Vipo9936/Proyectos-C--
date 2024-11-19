//Condicional if else aprobado o reprobado
#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3,p;
    cout<<"Programa que calcula el promedio de 3 calificaciones"<< endl;
    cout<<"Digite sus tres calificaciones: "<< endl;
	cin >> n1>> n2>> n3;
	p=(n1+n2+n3)/3;
if(p>=7){
      cout<<"Usted aprobo"<< endl;
      cout<<"Su promedio es: "<<p<< endl;
}
else{
	 cout<<"Usted reprobo"<< endl;
      cout<<"Su promedio es: "<<p<< endl;

}
    return 0;
}


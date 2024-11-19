//Promedio de 6 calificaciones
#include <iostream>
using namespace std;
int main() {
    float n1,n2,n3,n4,n5,n6,promedio;
    cout<<"Digite las 6 calificaciones separadas de un enter: "<< endl;
	cin >> n1>>n2>>n3>>n4>>n5>>n6;
	promedio = (n1+n2+n3+n4+n5+n6)/6;
    cout<<"El promedio es: "<<promedio<<endl;
    return 0;
}


//edad de una persona
#include <iostream>
#include <locale.h>
using namespace std;
int main() {
    setlocale(LC_ALL,"spanish");
    int ed,an,n ;
    cout << "Calculadora para la edad de una persona:" << endl;
    cout<<"Digite el año actual"<< endl;
	cin >> an;
    cout<<"Digite su año de nacimiento: "<< endl;
	cin >> ed;
	n = (an-ed);
    cout<<"Su edad es: "<<n<<endl;
    return 0;
}

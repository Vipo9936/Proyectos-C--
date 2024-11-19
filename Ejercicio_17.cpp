//Tabla en base a un numero
#include <iostream>
using namespace std;
int main() {
    int star;
    cout<<"Digite un numero a multiplicar hasta el 10: "<< endl;
    cin >> star;
cout << "Tabla del "<<star<<" hasta el 10 :" <<endl;
    for (int i = 1 ; i <= 10; ++i) {
    cout << star <<" x " << i << " = " << star * i <<endl;
    }
    return 0;
}



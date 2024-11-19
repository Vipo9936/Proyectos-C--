//Condicional if else mayor,menor,igual
#include <iostream>
using namespace std;
int main() {
    int n1,n2;
    cout<<"Digite dos numeros entero: "<< endl;
	cin >> n1>> n2;
if(n1>n2){
      cout<<"El primer numero es mayor "<< endl;
}
else if(n1<n2){
      cout<<"El segundo numero es mayor "<< endl;
}
else{
	cout<<"Ambos numero son iguales "<< endl;
}
    return 0;
}


// Ciclo do-while para imprimir números del 25 al 5
#include <iostream>
using namespace std;
int main() {
    int i = 25;
    cout << "Serie del 25 al 5 "<<endl;
    do {
        cout << i << " "<<endl;
        i-=5;  
	    } while (i >= 5);
    cout << endl;
    return 0;
}


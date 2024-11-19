 // Ciclo do-while para imprimir números del 3 al 30
#include <iostream>
using namespace std;
int main() {
    int i = 3;
     cout<< "Serie del 3 al 30 "<<endl;
    do {
        cout << i << " "<<endl;
        i += 3;
    } while (i <= 30);
    cout << endl;
    return 0;
}


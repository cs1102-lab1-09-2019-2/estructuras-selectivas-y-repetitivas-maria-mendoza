#include <iostream>
using namespace std;

int main() {
    int numero, max=0;
    do{
        cout<<"ingrese el numero:";
        cin<<numero;
        if(numero>max) max=numero;
    }while(numero!=0);
    cout<<"el mayor numero es:"<<max<<endl;
}

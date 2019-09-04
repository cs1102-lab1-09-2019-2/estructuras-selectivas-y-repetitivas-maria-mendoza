#include <iostream>
using namespace std;

int main(){
cout<<"Zonas:\n";
cout<<"1= SuperVip => 212\n";
cout<<"2= Vip => 170\n";
cout<<"3= Preferencial =>136\n";
cout<<"4= General =>59\n";
float precio;
int zona, claro;
cout<<"Eliga el numero de la zona : ";
cin>>zona;
switch(zona){
    case 1: precio= 212; break;
    case 2: precio= 170; break;
    case 3: precio= 136; break;
    case 4: precio= 59; break;
    default: cout<<"error";
}
cout<<"¿Eres cliente Claro? Si la respuesta es Sí, marque 1. Si la respuesta es No, marque 2: ";
cin>>claro;
if(claro==1){
    precio=precio-precio*0.2;
}
else if (claro!=0){
    cout<<"error";
}
cout<<"precio de la entrada: "<<precio<<endl;
}

#include <iostream>
#include<string>
using namespace std;
int n_estudiante;

  float calcularPromedio(int n_estudiante){
  cout<<"Alumno numero "<<n_estudiante+1;
  cout<<"\n";
  float PC1,PC2,PC3,PC4,PROYECTO,E1,E2,promedio;
  do{
  cout<<"Práctica 1: ";
  cin>>PC1;
  }while(PC1<0||PC1>20);
  do{
  cout<<"Práctica 2: ";
  cin>>PC2;
  }while(PC2<0||PC2>20);
  do{
  cout<<"Práctica 3: ";
  cin>>PC3;
  }while(PC3<0||PC3>20);
  do{
  cout<<"Práctica 4: ";
  cin>>PC4;
  }while(PC4<0||PC4>20);
  do{
  cout<<"Proyecto: ";
  cin>>PROYECTO;
  }while(PROYECTO<0||PROYECTO>20);
  do{
  cout<<"Examen 1: ";
  cin>>E1;
  }while(E1<0||E1>20);
  do{
  cout<<"Examen 2: ";
  cin>>E2;
  }while(E2<0||E2>20);

promedio=0.05*PC1+0.1*PC2+ 0.1*PC3+0.15*PC4+0.2*PROYECTO+0.2*E1+0.2*E2;
  return promedio;

}


string obtenerEvento(float promedio){
  string evento1="International Collegiate Programming Contest";
  string evento2="Imagine Cup";
  string evento3="Hackathon de Miraflores";
  string evento4="Necesita mejorar";
  if (promedio>=18.0&& promedio<=20.0){
    return evento1;

  } else if (promedio>=15.0&& promedio<=17.99){
    return evento2;

}else if (promedio>=12.0&& promedio<=14.99){
  return evento3;

}else {
  return evento4;

}
}
#include <iostream>
#include<string>
using namespace std;


int main(){
int num_alumnos;
do{
cout<<"Numero de estudiantes: ";
cin>>num_alumnos;
}while(num_alumnos<=3 || num_alumnos>30);

float promedio;
string evento="";
int contador=0;
do{
  promedio=calcularPromedio(contador);
  evento = obtenerEvento(promedio);
  contador+=1;
}while(contador<num_alumnos);

cout<<"El promedio es:"<<calcularPromedio( contador);
cout<<"Evento: "<<obtenerEvento(promedio);

}
}

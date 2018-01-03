//Programa que calcula la velocidad dado el tiempo
//Nombre: Joseph Edrei Moreno Cruz
//8 de noviembre del 2017
#include <iostream>
#include <string>
using namespace std;
int main(){
float d=0;
float t=0;
float v=0;
cout<<"Ingrese el tiempo"<<endl;
cin>>t;
cout<<"Ingrese la distancia"<<endl;
cin>>d;
//La fórmula de la velocidad es : v=d/t no v=d*t.
v=d*t;
cout<<"La velocidad es: "<<v<<endl;
return 0;
}

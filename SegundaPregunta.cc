//Diagrama traducido al lenguaje C++
//El programa comienza con x=1 que dado que 1<=5 entonces ingresarà al ciclo While (En cuanto x>5 el programa termina), 
//luego vemos si x es divisible o no entre 3, si no lo es entonces el programa imprime el numero en la terminal y si es divisible
//no lo imprime, en cualquiera de los dos casos hacemos x=x+2 y vemos si se cumple la condiciòn para que entre o no al ciclo While,
//repitiendo todo lo anterior. El programa tiene un final dado que siempre estamos sumando 2 a x por lo que tarde o temprano cumplira
//la condidiòn del ciclo While y terminarà el programa.
//Nombre: Joseph Edrei Moreno Cruz
//8 de noviembre del 2017
#include <iostream>
#include <string>
using namespace std;
int main(){
int x=1;
while(x<=5){
if(x%3==0){
x=x+2;
}
else{
cout<<x<<endl;
x=x+2;
}
}
return 0;
}

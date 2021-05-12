#include<iostream>

using namespace std;

int main(){
 //Datos de Entrada
  float nota1JL, nota2JL, nota3JL, notatrabajoJL, notafinal=0;

  cout << "\nNota final de fundamentos de Programacion\n\n";

  cout << "\nIngrese la nota correspondiente a la 1ra unidad \n \n";
  cin >> nota1JL;

  cout << "\nIngrese la nota correspondiente a la 2da unidad \n \n";
  cin >> nota2JL;

  cout << "\nIngrese la nota correspondiente a la 3ra unidad \n \n";
  cin >> nota3JL;

  cout << "\nIngrese la nota correspondiente al trabajo final \n \n";
  cin >> notatrabajoJL;

  //Proceso

  nota1 *= 0.2;

  nota2 *= 0.15;

  nota3 *= 0.15;

  notatrabajo *=0.5;

  notafinal=nota1 + nota2 + nota3 + notatrabajo /4;

  cout <<"\nla nota final es: "<<notafinal<<endl;

  return 0;
  }

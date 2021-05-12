#include <iostream>

using namespace std;

int main(){

  cout<<"Monto total de bono \n";
  //Datos de entrada
	 double nuevoSalarioJL, montobonoJL;
   
	 
	 cout<<"\nIngrese los puntos correspondientes: ";
		cin >>montobonoJL;
	
	//Proceso
	if((montobonoJL >= 50 && montobonoJL <= 100));{
		nuevoSalarioJL=montobonoJL + (montobonoJL * 0.10);
	}

	if((montobonoJL >= 101 && montobonoJL <= 150));{
		nuevoSalarioJL=montobonoJL + (montobonoJL * 0.40);
	}

	if(<montobonoJL <151>);{
    nuevoSalarioJL = montobonoJL + (montobonoJL * 0.70);
  }

  cout<<"\n El salario minimo es: "<<nuevoSalarioJL<< endl;
	
	
	return 0;
}
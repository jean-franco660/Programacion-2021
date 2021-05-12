#include <iostream>
using namespace std;
main(){

  cout<<"Tipos de vacunas (A, B o C) para el covid-19  \n";
  //Datos de entrada
	 int edadJL;	 
	 
	 cout<<"\nIngrese su edad: ";
		cin >>edadJL;
	
	//Proceso
	if(edadJL <=15)
  {
		cout<<"\nRecibira una vacuna de Tipo A sin importar su genero \n";
	}
	else if((edadJL >=16)&&(edadJL <=69))
  {
		cout<<"\nRecibira una vacuna de Tipo B si su genero es femenino \n";
		cout<<"\nRecibira una vacuna de Tipo A si su genero es masculino \n";
	}
	else if(edadJL >70)
  {
		cout<<"Recibira una vacuna tipo C sin importar su genero \n";
	} 
	else {
		cout<<"no recibira una vacuna";
	}
	
	
	return 0;
}
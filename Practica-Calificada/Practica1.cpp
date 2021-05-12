#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main(){ 
    int op, aJL, bJL, respJL;
  
	cout<<"\n1. +";
	cout<<"\n2. -";
	cout<<"\n3. *";
	cout<<"\n4. /";
	cout<<"\n5. ^\n";
	cout<<"\nElija una opcion:\t";
	cin>>op;
	switch(op){
		case 1:{
		cout<<"ingrese el 1re Valor:";
		cin>>aJL;
				
		cout<<"ingrese el 2do Valor:";
		cin>>bJL;
				
		respJL=aJL+bJL;
				
		cout<<"la suma es: \t"<<respJL<<endl;
		break;
		}
		case 2:{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
				
			respJL=aJL - bJL;
				
			cout<<"la resta es\t"<<respJL<<endl;
			break;}
			
		case 3:{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
				
			respJL=aJL * bJL;;
				
			cout<<"la multiplicacion es\t"<<respJL<<endl;
			break;
		}
		
		case 4:{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
	
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
	
			respJL=aJL / bJL;
		
			cout<<"la division es\t"<<respJL<<endl;
			break;
		}
			
		case 5:{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
			
			respJL=pow(aJL,bJL);
					
			cout<<"la potencia es\t"<<respJL<<endl;
			break;
		}
	}
	
	return 0;
}
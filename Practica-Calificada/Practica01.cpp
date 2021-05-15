#include<iostream>
#include<math.h>
using namespace std;

int main(){ 
	
	int aJL,bJL, respJL;
	char op;
	cout<<"\n+.";
	cout<<"\n-.";
	cout<<"\n*.";
	cout<<"\n/.";
	cout<<"\n^.\n";
	cout<<"\nelija una opcion:\t";
	cin>>op;
	switch(op){
		case '+':{
		cout<<"ingrese el 1re Valor:";
		cin>>aJL;
				
		cout<<"ingrese el 2do Valor:";
		cin>>bJL;
				
		respJL=aJL+bJL;
				
		cout<<"la suma es:\t"<<respJL<<endl;
		break;}

		case '-':{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
				
			respJL=aJL - bJL;
				
			cout<<"la resta es:\t"<<respJL<<endl;
			break;}
		case '*':{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
				
			respJL=aJL * bJL;;
				
			cout<<"la multiplicacion es:\t"<<respJL<<endl; 
			break;
		}
		case '/':{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
	
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
	
			respJL=aJL / bJL;
		
			cout<<"la division es:\t"<<respJL<<endl;
			break;
			}
		case '^':{
			cout<<"ingrese el 1re Valor:";
			cin>>aJL;
				
			cout<<"ingrese el 2do Valor:";
			cin>>bJL;
			
			respJL=pow(aJL,bJL);
					
			cout<<"la potencia es:\t"<<respJL<<endl;
			break;
		}
	
		
	}
	
	return 0;
}

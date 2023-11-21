#include "iostream"
#include "conio.h"
using namespace std;

int main(){
	int numero;
	
	cout<<"Porfavor agregue el numero de multiplicacion de la tabla:"<<endl;
	cin>>numero;
	 
	 for(int i=1;i<=10;i++){
	 	int multiplicacion = i * numero;
	 	cout<<numero <<" x "<< i <<"="<< multiplicacion <<endl;
		 }
		 return 0;
}

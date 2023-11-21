#include <iostream>
using namespace std;
int dia;
int main(){
	cout<<"Digita el numero de dia";
		cin>>dia;
		switch(dia){
			case 1:
			cout<< "el dia es lunes";
				break;
			case 2:
				cout<<"el dia es martes";
			     break;
		   case 3:
		   	cout<<" el dia es miercoles";
			     	break;
		    case 4:
		    	cout<< "el dia es jueves";
		    	break;
		    case 5:
		    	cout<<" el dia es viernes";
		    	break;
		    case 6:
		    	cout<<"el dia es sabado";
		    	break;
		    case 7:
		    	cout<< " el dia es domingo";
		    	break;	     			
	        defaut:
	          		cout<<"no es un dia";
		
		}
		return 0;
		
}
 

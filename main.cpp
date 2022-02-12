
#include <iostream>

using namespace std;
float Numero1 , Numero2, total;
int elec;

int main ()
{
cout << " ingrese operacion "<<endl;
cout << " 1. Suma " << endl;
cout << " 2. Resta " << endl;
cout << " 3. Divison" << endl;
cout << " 4. Multiplicacion " << endl;
cin>>(elec);



cout<<( " Ingrese Primer Numero " )<<endl;
cin>>(Numero1); 

cout<<( "Ingrese Segundo Numero" )<<endl;
cin>>(Numero2);


switch (elec){
	case  1 : 
	total= Numero1+Numero2;
	cout<<"El Total es:"<<total<< endl;
	break;
	case  2 :
		total=Numero1-Numero2;
	cout<<"El Total es:"<<total<< endl;
	break;
	
	case 3 :
		total=Numero1/Numero2 ;
 cout<<"El Total es:"<<total<< endl;
	break;
	
	case 4 :
	total=Numero1*Numero2;
	cout<<"El Total es:"<<total<< endl;	
	break;	

return 0;
}
}



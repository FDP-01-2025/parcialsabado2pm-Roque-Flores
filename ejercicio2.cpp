#include <iostream>

using namespace std;

int main ()
{

int numero[11]; //definiendo array con 12 valores posibles (empezando desde el 0) 

cout<<"**SISTEMA DE 12 NUMEROS**"<<endl;
cout<<"Digite 12 numeros, los verá en orden inverso."<<endl;

cout<<"Digite el primer numero"<<endl; //pidendo el primer valor de "numero" al usuario
cin>>numero[0]; //obteniendo el primer valor para "numero" 

cout<<"Digite el segundo numero"<<endl; //pidendo el segundo valor de "numero" al usuario
cin>>numero[1];//obteniendo el segundo valor para "numero" 

cout<<"Digite el tercer numero"<<endl;
cin>>numero[2];

cout<<"Digite el cuarto numero"<<endl;
cin>>numero[3];

cout<<"Digite el quinto numero"<<endl;
cin>>numero[4];

cout<<"Digite el sexto numero"<<endl;
cin>>numero[5];

cout<<"Digite el septimo numero"<<endl;
cin>>numero[6];

cout<<"Digite el octavo numero"<<endl;
cin>>numero[7];

cout<<"Digite el noveno numero"<<endl;
cin>>numero[8];

cout<<"Digite el decimo numero"<<endl;
cin>>numero[9];

cout<<"Digite el decimo-primer numero"<<endl;
cin>>numero[10];

cout<<"Digite el decimo-segundo numero"<<endl;//pidendo el ultimo valor de "numero" al usuario
cin>>numero[11];//obteniendo el ultimo valor para "numero" 

cout<<"**NUMEROS EN ORDEN INVERSO: **"<<endl;

//Mostrando los valores en orden inverso
cout<<numero[11]<<endl; //Mostrando el ultimo valor de "numero"
cout<<numero[10]<<endl;
cout<<numero[9]<<endl;
cout<<numero[8]<<endl;
cout<<numero[7]<<endl;
cout<<numero[6]<<endl;
cout<<numero[5]<<endl;
cout<<numero[4]<<endl;
cout<<numero[3]<<endl;
cout<<numero[2]<<endl;
cout<<numero[1]<<endl;
cout<<numero[0]<<endl; //Mostrando el primer valor de "numero"

    return 0 ;
}
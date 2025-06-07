#include <iostream>

using namespace std;

int main ()
{
//Definiendo Variables
int numero_obtenido = 0;


cout<<"**MESES DEL AÑO**"<<endl;
cout<<"Digite un numero del 1 al 12 para obtener el mes y sus dias correspondientes"<<endl;
cin>>numero_obtenido; //Obteniendo el valor del numero

//Estableciendo Switch para cada caso segun el numero correspondiente, obtenido en "numero_obtenido"
switch (numero_obtenido)
{
case 1:
    cout<<"**ENERO-30 DIAS**"<<endl;
    break;

    case 2:
    cout<<"**FEBRERO-28 DIAS**"<<endl;
    break;

    case 3:
    cout<<"**MARZO-30 DIAS**"<<endl;
    break;

    case 4:
    cout<<"**ABRIL-31 DIAS**"<<endl;
    break;

    case 5:
    cout<<"**MAYO-30 DIAS**"<<endl;
    break;

    case 6:
    cout<<"**JUNIO-31 DIAS**"<<endl;
    break;

    case 7:
    cout<<"**JULIO-30 DIAS**"<<endl;
    break;

    case 8:
    cout<<"**AGOSTO-31 DIAS**"<<endl;
    break;

    case 9:
    cout<<"**SEPTIEMBRE-30 DIAS**"<<endl;
    break;

    case 10:
    cout<<"**OCTUBRE-31 DIAS**"<<endl;
    break;

    case 11:
    cout<<"**NOVIEMBRE-30 DIAS**"<<endl;
    break;

    case 12:
    cout<<"**DIECIEMBRE-31 DIAS**"<<endl;
    break;
default:
    break;
}

    return 0 ;
}
 
 #include <iostream>

using namespace std;

int main ()
{
string nombre;
int carnet; //validar con 8 digitos
int opcion;
string libros[15] = {"Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado","Este libro no se ha prestado"};



cout<<"**SISTEMA DE GESTION DE BIBLIOTECA**"<<endl;
cout<<"por favor ingrese su nombre:"<<endl;
cin>>nombre;
cout<<"por favor ingrese su carnet:"<<endl;
cin>>carnet;

cout<<"**OPCIONES**"<<endl;
cout<<"1-Prestar Libro"<<endl;
cout<<"2-Devolver Libro"<<endl;
cout<<"3-Salir"<<endl;

switch (opcion)
{
case 1:
    cout<<"**USTED A ESCOGIDO PRESTAR UN LIBRO**"<<endl;
    cout<<"Ingrese el titulo del libro a prestar: "<<endl;
    cin>>libros[0];
    cout<<"**PRESTAMO EXITOSO**"<<endl;
    break;

case 2:
    cout<<"**USTED A ESCOGIDO DEVOLVER UN LIBRO**"<<endl;
    cout<<"**LISTA DE LIBROS PRESTADOS:**"<<endl;
    cout<<"1"<<libros[0];
    cout<<"2"<<libros[2];

break;

default:
    break;
}







 return 0 ;
}
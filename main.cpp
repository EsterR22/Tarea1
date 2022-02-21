#include "Cliente.cpp"
#include <iostream>
using namespace std;
main()
{string nit,nombres,apellidos,direccion;
int telefono;

cout<<"Ingresar Nit: ";
cin>>nit;
cout<<"Ingresar Nombres: ";
cin>>nombres;
cout<<"Ingresar Apellidos: ";
cin>>apellidos;
cout<<"Ingresar Direccion: ";
cin>>direccion;
cout<<"Ingresar Telefono: ";
cin>>telefono;

//instacia de un objeto
Cliente obj=Cliente(nombres,apellidos,direccion,telefono,nit);
/*obj.mostrar();

cout<<"Ingresar Nit: ";
cin>>nit;
obj.setNit(nit);*/
cout<<"Datos del Cliente: "<<obj.getNit()<<","<<obj.getNombres()<<","<<obj.getApellidos()<<","<<obj.getDireccion()<<","<<obj.getTelefono();



//para usar el constructor vacio 

/*Cliente obj=Cliente();
obj.setNit(nit);
obj.setNombres(nombres);
obj.setApellidos(apellidos);
obj.setDireccion(direccion);
obj.setTelefono(telefono); 
obj.mostrar();
*/

}

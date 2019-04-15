#ifndef ARRAY_ESTRUCTURAS

struct S_empleado{
int ID;
char nombre[51];
int sector;
char apellido[51];
float salario;
int isEmpty;
}typedef Empleado;

int cargarDatosVacio(Empleado* sEmpleados,int limite);
int cargarIndice(Empleado* sEmpleados,int indice,int limite);
int mostrarEmpleadosOrdenados(Empleado* sEmpleados,int limite);
#endif // ARRAY_ESTRUCTURAS

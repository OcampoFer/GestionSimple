#include "Producto.h"
#include <cstring>
#include "FuncionesExtras.h"

Producto::Producto( ){
	
}

Producto::Producto(std::string nombre,std::string modelo,std::string descripcion,
				   std::string color,std::string costo,std::string preciominorista,
				   std::string preciomayorista) {
	this->nombre = nombre;
	this->modelo = modelo;
	this->descripcion = descripcion;
	this->color = color;
	this->costo = costo;
	this->preciominorista = preciominorista;
	this->preciomayorista = preciomayorista;
	this->cantidadDisponible = 0;
	this->cantidadVendido = 0;
}

std::string Producto::verNombre ( ) {
	return nombre;
}

std::string Producto::verModelo ( ) {
	return modelo;
}

std::string Producto::verDescripcion( ) {
	return descripcion;
}

std::string Producto::verColor ( ) {
	return color;
}

std::string Producto::verCosto ( ) {
	return costo;
}

std::string Producto::verPrecioMinorista ( ) {
	return preciominorista;
}

std::string Producto::verPrecioMayorista ( ) {
	return preciomayorista;
}

int Producto::verCantidadDisponible ( ) {
	return cantidadDisponible;
}

int Producto::verCantidadVendido ( ) {
	return cantidadVendido;
}

void Producto::modificarNombre (std::string nombre) {
	primeraLetraMayuscula(nombre);
	this->nombre = nombre;
}

void Producto::modificarModelo (std::string modelo) {
	primeraLetraMayuscula(modelo);
	this->modelo = modelo;
}

void Producto::modificarDescripcion (std::string descripcion) {
	primeraLetraMayuscula(descripcion);
	this->descripcion = descripcion;
}

void Producto::modificarColor (std::string color) {
	primeraLetraMayuscula(color);
	this->color = color;
}

void Producto::modificarCosto(std::string costo) {
	this->costo = costo;
}

void Producto::modificarPrecioMinorista (std::string preciominorista) {
	this->preciominorista = preciominorista;
}

void Producto::modificarPrecioMayorista (std::string preciomayorista) {
	this->preciomayorista = preciomayorista;
}

void Producto::modificarCantidadDisponible (int cantidadDisponible) {
	if(this->cantidadDisponible<=cantidadDisponible){
		this->cantidadDisponible = cantidadDisponible;
	}else{
		int aux = this->cantidadDisponible-cantidadDisponible;
		int cant = verCantidadVendido();
		cant += aux;
		modificarCantidadVendido(cant);
		this->cantidadDisponible = cantidadDisponible;
	}
}

void Producto::modificarCantidadVendido (int cantidadVendido) {
	this->cantidadVendido = cantidadVendido;
}

void Producto::guardarBinarioProducto(std::ofstream &productoBin){
	structProducto aux;
	strcpy(aux.nombre,nombre.c_str());
	strcpy(aux.modelo,modelo.c_str());
	strcpy(aux.descripcion,descripcion.c_str());
	strcpy(aux.color,color.c_str());
	strcpy(aux.costo,costo.c_str());
	strcpy(aux.preciominorista,preciominorista.c_str());
	strcpy(aux.preciomayorista,preciomayorista.c_str());
	aux.cantidadDisponible = cantidadDisponible;
	aux.cantidadVendido = cantidadVendido;
	productoBin.write(reinterpret_cast<char*>(&aux),sizeof(aux));
}

void Producto::cargarBinarioProducto(std::ifstream &productoBin){
	structProducto aux;
	productoBin.read(reinterpret_cast<char*>(&aux),sizeof(aux));
	modificarNombre(aux.nombre);
	modificarModelo(aux.modelo);
	modificarDescripcion(aux.descripcion);
	modificarColor(aux.color);
	modificarCosto(aux.costo);
	modificarPrecioMinorista(aux.preciominorista);
	modificarPrecioMayorista(aux.preciomayorista);
	modificarCantidadDisponible(aux.cantidadDisponible);
	modificarCantidadVendido(aux.cantidadVendido);
}

std::string Producto::validarDatos(){
	std::string err = "";
	if (nombre.size()==0) err += "Error: el nombre no puede estar vacio.\n";
	if (nombre.size()>256) err += "Error: nombre demasiado largo.\n";
	if (modelo.size()==0) err+= "Error: el modelo no puede estar vacio.\n";
	if (modelo.size()>256) err+= "Error: modelo demasiado largo.\n";
	if (descripcion.size()==0) err += "Error: la descripcion no puede estar vacia.\n";
	if (descripcion.size()>256) err += "Error: desripcion demasiado larga.\n";
	if (color.size()==0) color = "N/A";
	if (color.size()>256) err += "Error: color demasiado largo.\n";
	if (esNumero(color)) err += "Error: el color solo puede contener letras.\n";
	if (esLetra(costo)) err += "Error: el costo solo puede contener numeros.\n";
	if (costo.size()==0) err += "Error: el costo no puede estar vacio.\n";
	if (esLetra(preciominorista)) err += "Error: el precio minorista solo puede contener numeros.\n";
	if (preciominorista.size()==0) err += "Error: el precio minorista no puede estar vacio.\n";
	if (esLetra(preciomayorista)) err += "Error: el precio mayorista solo puede contener numeros.\n";
	if (preciomayorista.size()==0) err += "Error: el precio mayorista no puede estar vacio.\n";
	if (cantidadDisponible<0) err += "Error: la cantidad disponible no puede ser negativa.\n";
	return err;
}

bool comparacionPorNombre(Producto p1, Producto p2) {
	std::string str1 = p1.verNombre(); pasarMinuscula(str1);
	std::string str2 = p2.verNombre(); pasarMinuscula(str2);
	return str1<str2;	
}

bool comparacionPorModelo(Producto p1, Producto p2) {
	std::string str1 = p1.verModelo(); pasarMinuscula(str1);
	std::string str2 = p2.verModelo(); pasarMinuscula(str2);
	return str1<str2;	
}

bool comparacionPorColor(Producto p1, Producto p2) {
	std::string str1 = p1.verColor(); pasarMinuscula(str1);
	std::string str2 = p2.verColor(); pasarMinuscula(str2);
	return str1<str2;	
}

bool comparacionPorCosto(Producto p1, Producto p2) {
	int valor1 = atoi(p1.verCosto().c_str());
	int valor2 = atoi(p2.verCosto().c_str());
	return valor1<valor2;
}

bool comparacionPorPrecioMinorista(Producto p1, Producto p2) {
	int valor1 = atoi(p1.verPrecioMinorista().c_str());
	int valor2 = atoi(p2.verPrecioMinorista().c_str());
	return valor1<valor2;
}

bool comparacionPorPrecioMayorista(Producto p1, Producto p2) {
	int valor1 = atoi(p1.verPrecioMayorista().c_str());
	int valor2 = atoi(p2.verPrecioMayorista().c_str());
	return valor1<valor2;
}

bool comparacionPorCantidadDisponible(Producto p1, Producto p2) {
	int valor1 = p1.verCantidadDisponible();
	int valor2 = p2.verCantidadDisponible();
	return valor1<valor2;
}

bool comparacionPorCantidadVendido(Producto p1, Producto p2) {
	int valor1 = p1.verCantidadVendido();
	int valor2 = p2.verCantidadVendido();
	return valor1<valor2;
}

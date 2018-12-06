#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <fstream>
#include "Producto.h"

struct structProducto{
	char nombre[256],modelo[256],descripcion[256],color[256],costo[256],
		preciominorista[256],preciomayorista[256];
	int cantidadDisponible, cantidadVendido;
};

class Producto {
private:
	std::string nombre;
	std::string modelo;
	std::string descripcion;
	std::string color;
	std::string costo;
	std::string preciominorista;
	std::string preciomayorista;
	int cantidadDisponible;
	int cantidadVendido;
public:
	//Inicio constructor
	Producto();
	Producto(std::string nombre,std::string modelo,std::string descripcion,
			 std::string color,std::string costo,std::string preciominorista,std::string preciomayorista);
	//Fin constructor.
	
	//Inicio ver
	std::string verNombre();
	std::string verModelo();
	std::string verDescripcion();
	std::string verColor();
	std::string verCosto();
	std::string verPrecioMinorista();
	std::string verPrecioMayorista();
	int verCantidadDisponible();
	int verCantidadVendido();
	//Fin ver
	
	//Inicio modificar
	void modificarNombre(std::string nombre);
	void modificarModelo(std::string modelo);
	void modificarDescripcion(std::string descripcion);
	void modificarColor(std::string color);
	void modificarCosto(std::string costo);
	void modificarPrecioMinorista(std::string preciominorista);
	void modificarPrecioMayorista(std::string preciomayorista);
	void modificarCantidadDisponible(int cantidadDisponible);
	void modificarCantidadVendido(int cantidadVendido);
	//Fin modificar
	
	//Inicio guardado binario
	void guardarBinarioProducto(std::ofstream &productoBin);
	void cargarBinarioProducto(std::ifstream &productoBin);
	//Inicio guardado binario
	
	//Inicio validar datos
	std::string validarDatos();
	//Fin validar datos
};

//Inicio metodos de comparacion fuera de la clase
bool comparacionPorNombre(Producto p1, Producto p2);
bool comparacionPorModelo(Producto p1, Producto p2);
bool comparacionPorColor(Producto p1, Producto p2);
bool comparacionPorCosto(Producto p1, Producto p2);
bool comparacionPorPrecioMinorista(Producto p1, Producto p2);
bool comparacionPorPrecioMayorista(Producto p1, Producto p2);
bool comparacionPorCantidadDisponible(Producto p1, Producto p2);
bool comparacionPorCantidadVendido(Producto p1, Producto p2);
//Fin metodos de comparacion fuera de la clase

#endif

#ifndef GESTOR_H
#define GESTOR_H
#include <string>
#include <vector>
#include "Producto.h"

class Gestor {
private:
	std::vector<Producto> vCelulares;
	std::vector<Producto> vAccesorios;
	std::vector<Producto> vRepuestos;
	std::string nomArchivoCelulares;
	std::string nomArchivoAccesorios;
	std::string nomArchivoRepuestos;	
public:
	//Inicio constructor
	Gestor(std::string nomArchivoCelulares, std::string nomArchivoAccesorios,
		   std::string nomArchivoRepuestos);
	//Fin constructor
	
	//Inicio guardado en binario
	bool guardarBinarios();
	//Fin guardado en binario
	
	//Inicio VER
	Producto &verCelular(int i);
	Producto &verAccesorio(int i);
	Producto &verRepuesto(int i);
	int cantCelulares();
	int cantAccesorios();
	int cantRepuestos();
	std::vector<Producto> productoSinStock();
	std::vector<Producto> celularesMasVendido();
	std::vector<Producto> celularesMenosVendido();
	std::vector<Producto> accesoriosMasVendido();
	std::vector<Producto> accesoriosMenosVendido();
	std::vector<Producto> repuestosMasVendido();
	std::vector<Producto> repuestosMenosVendido();
	std::vector<int> indicesBuscados(std::string palabra, int tipo);
	//Fin VER
	
	//Inicio MODIFICAR
	void modificarCelular(Producto &c, int posCelular);
	void modificarAccesorio(Producto &a, int posAccesorio);
	void modificarRepuesto(Producto &r, int posRepuesto);
	bool agregarCelular(Producto c);
	bool agregarAccesorio(Producto a);
	bool agregarRepuesto(Producto r);
	void modificarCantidadCelular(int pos,int cantidad);
	void modificarCantidadAccesorio(int pos,int cantidad);
	void modificarCantidadRepuesto(int pos,int cantidad);
	void eliminarCelular(int posCelular);
	void eliminarAccesorio(int posAccesorio);
	void eliminarRepuesto(int posRepuesto);
	//Fin MODIFICAR
	
	//Inicio otras funciones
	void ordenarProductos(int tipo,int op);
	//Fin otras funciones
};

#endif

#include "Gestor.h"
#include <algorithm>
#include "FuncionesExtras.h"
using namespace std;

Gestor::Gestor(std::string nomArchivoCelulares, std::string nomArchivoAccesorios,
			   std::string nomArchivoRepuestos) {
	this->nomArchivoCelulares = nomArchivoCelulares;
	this->nomArchivoAccesorios = nomArchivoAccesorios;
	this->nomArchivoRepuestos = nomArchivoRepuestos;
	
	std::ifstream arCelulares(nomArchivoCelulares.c_str(),std::ios::binary|std::ios::ate);
	std::ifstream arAccesorios(nomArchivoAccesorios.c_str(),std::ios::binary|std::ios::ate);
	std::ifstream arRepuestos(nomArchivoRepuestos.c_str(),std::ios::binary|std::ios::ate);
	
	if(arCelulares.is_open()){
		int cant = arCelulares.tellg() / sizeof(structProducto);
		vCelulares.resize(cant);
		arCelulares.seekg(0,std::ios::beg);
		for(int i=0;i<cant;i++){
			vCelulares[i].cargarBinarioProducto(arCelulares);
		}
		arCelulares.close();
	}
	
	if(arAccesorios.is_open()){
		int cant = arAccesorios.tellg() / sizeof(structProducto);
		vAccesorios.resize(cant);
		arAccesorios.seekg(0,std::ios::beg);
		for(int i=0;i<cant;i++){
			vAccesorios[i].cargarBinarioProducto(arAccesorios);
		}
		arAccesorios.close();
	}
	
	if(arRepuestos.is_open()){
		int cant = arRepuestos.tellg() / sizeof(structProducto);
		vRepuestos.resize(cant);
		arRepuestos.seekg(0,std::ios::beg);
		for(int i=0;i<cant;i++){
			vRepuestos[i].cargarBinarioProducto(arRepuestos);
		}
		arRepuestos.close();
	}
}

bool Gestor::guardarBinarios(){
	std::ofstream arCelulares(nomArchivoCelulares.c_str(),std::ios::binary|std::ios::trunc);
	std::ofstream arAccesorios(nomArchivoAccesorios.c_str(),std::ios::binary|std::ios::trunc);
	std::ofstream arRepuestos(nomArchivoRepuestos.c_str(),std::ios::binary|std::ios::trunc);
	
	if(!arCelulares.is_open()) return false;
	for(int i=0;i<cantCelulares();i++){
		vCelulares[i].guardarBinarioProducto(arCelulares);
	}
	arCelulares.close();
	if(!arAccesorios.is_open()) return false;
	for(int i=0;i<cantAccesorios();i++){
		vAccesorios[i].guardarBinarioProducto(arAccesorios);
	}
	arAccesorios.close();
	if(!arRepuestos.is_open()) return false;
	for(int i=0;i<cantRepuestos();i++){
		vRepuestos[i].guardarBinarioProducto(arRepuestos);
	}
	arRepuestos.close();
	return true;
}

Producto & Gestor::verCelular (int i) {
	return vCelulares[i];
}

Producto & Gestor::verAccesorio (int i) {
	return vAccesorios[i];
}

Producto & Gestor::verRepuesto (int i) {
	return vRepuestos[i];
}

int Gestor::cantCelulares ( ) {
	return vCelulares.size();
}

int Gestor::cantAccesorios ( ) {
	return vAccesorios.size();
}

int Gestor::cantRepuestos ( ) {
	return vRepuestos.size();
}

std::vector<Producto> Gestor::productoSinStock ( ) {
	std::vector<Producto> aux;
	for(size_t i=0;i<vCelulares.size();i++){
		if(verCelular(i).verCantidadDisponible()==0){
			aux.push_back(verCelular(i));
		}
	}
	for(size_t i=0;i<vAccesorios.size();i++){
		if(verAccesorio(i).verCantidadDisponible()==0){
			aux.push_back(verAccesorio(i));
		}
	}
	for(size_t i=0;i<vRepuestos.size();i++){
		if(verRepuesto(i).verCantidadDisponible()==0){
			aux.push_back(verRepuesto(i));
		}
	}
	return aux;
}

std::vector<Producto> Gestor::celularesMasVendido ( ) {
	std::vector<Producto> aux1 = vCelulares;
	sort(aux1.rbegin(),aux1.rend(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
		}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<Producto> Gestor::celularesMenosVendido ( ) {
	std::vector<Producto> aux1 = vCelulares;
	sort(aux1.begin(),aux1.end(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
			}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<Producto> Gestor::accesoriosMasVendido ( ) {
	std::vector<Producto> aux1 = vAccesorios;
	sort(aux1.rbegin(),aux1.rend(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
			}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<Producto> Gestor::accesoriosMenosVendido ( ) {
	std::vector<Producto> aux1 = vAccesorios;
	sort(aux1.begin(),aux1.end(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
			}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<Producto> Gestor::repuestosMasVendido ( ) {
	std::vector<Producto> aux1 = vRepuestos;
	sort(aux1.rbegin(),aux1.rend(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
			}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<Producto> Gestor::repuestosMenosVendido ( ) {
	std::vector<Producto> aux1 = vRepuestos;
	sort(aux1.begin(),aux1.end(),comparacionPorCantidadVendido);
	int cant = aux1.size();
	std::vector<Producto> aux2;
	if(cant<=3){
		switch(cant){
		case 0:{
			break;
			}
		case 1:{
			aux2.push_back(aux1[0]);
			break;
			}
		case 2:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			break;
			}
		case 3:{
			aux2.push_back(aux1[0]);
			aux2.push_back(aux1[1]);
			aux2.push_back(aux1[2]);
			break;
			}
		}
	}else{
		aux2.push_back(aux1[0]);
		aux2.push_back(aux1[1]);
		aux2.push_back(aux1[2]);
	}
	return aux2;
}

std::vector<int> Gestor::indicesBuscados (std::string palabra, int tipo) {
	pasarMinuscula(palabra); std::vector<int> aux;
	switch(tipo){
	case 1:{
		for(size_t i=0;i<vCelulares.size();i++){
			std::string str = vCelulares[i].verNombre() + vCelulares[i].verModelo();
			pasarMinuscula(str);
			if(str.find(palabra,0)!=std::string::npos){
				aux.push_back(i);
			}
		}
		return aux;
	}
	case 2:{
		for(size_t i=0;i<vAccesorios.size();i++){
			std::string str = vAccesorios[i].verNombre() + vAccesorios[i].verModelo();
			pasarMinuscula(str);
			if(str.find(palabra,0)!=std::string::npos){
				aux.push_back(i);
			}
		}
		return aux;
	}
	case 3:{
		for(size_t i=0;i<vRepuestos.size();i++){
			std::string str = vRepuestos[i].verNombre() + vRepuestos[i].verModelo();
			pasarMinuscula(str);
			if(str.find(palabra,0)!=std::string::npos){
				aux.push_back(i);
			}
		}
		return aux;
	}
	}
	return aux;
}

void Gestor::modificarCelular(Producto &c, int posCelular){
	vCelulares[posCelular].modificarNombre(c.verNombre());
	vCelulares[posCelular].modificarModelo(c.verModelo());
	vCelulares[posCelular].modificarDescripcion(c.verDescripcion());
	vCelulares[posCelular].modificarColor(c.verColor());
	vCelulares[posCelular].modificarCosto(c.verCosto());
	vCelulares[posCelular].modificarPrecioMinorista(c.verPrecioMinorista());
	vCelulares[posCelular].modificarPrecioMayorista(c.verPrecioMayorista());
	int cantVendida = vCelulares[posCelular].verCantidadVendido();
	if(vCelulares[posCelular].verCantidadDisponible()>c.verCantidadDisponible()){
		cantVendida += (vCelulares[posCelular].verCantidadDisponible() - 
					   c.verCantidadDisponible());
	}
	vCelulares[posCelular].modificarCantidadDisponible(c.verCantidadDisponible());
	vCelulares[posCelular].modificarCantidadVendido(cantVendida);
}

void Gestor::modificarAccesorio(Producto &a, int posAccesorio){
	vAccesorios[posAccesorio].modificarNombre(a.verNombre());
	vAccesorios[posAccesorio].modificarModelo(a.verModelo());
	vAccesorios[posAccesorio].modificarDescripcion(a.verDescripcion());
	vAccesorios[posAccesorio].modificarColor(a.verColor());
	vAccesorios[posAccesorio].modificarCosto(a.verCosto());
	vAccesorios[posAccesorio].modificarPrecioMinorista(a.verPrecioMinorista());
	vAccesorios[posAccesorio].modificarPrecioMayorista(a.verPrecioMayorista());
	int cantVendida = vAccesorios[posAccesorio].verCantidadVendido();
	if(vAccesorios[posAccesorio].verCantidadDisponible()>a.verCantidadDisponible()){
		cantVendida += (vAccesorios[posAccesorio].verCantidadDisponible() - 
						a.verCantidadDisponible());
	}
	vAccesorios[posAccesorio].modificarCantidadDisponible(a.verCantidadDisponible());
	vAccesorios[posAccesorio].modificarCantidadVendido(cantVendida);
}

void Gestor::modificarRepuesto(Producto &r, int posRepuesto){
	vRepuestos[posRepuesto].modificarNombre(r.verNombre());
	vRepuestos[posRepuesto].modificarModelo(r.verModelo());
	vRepuestos[posRepuesto].modificarDescripcion(r.verDescripcion());
	vRepuestos[posRepuesto].modificarColor(r.verColor());
	vRepuestos[posRepuesto].modificarCosto(r.verCosto());
	vRepuestos[posRepuesto].modificarPrecioMinorista(r.verPrecioMinorista());
	vRepuestos[posRepuesto].modificarPrecioMayorista(r.verPrecioMayorista());
	int cantVendida = vRepuestos[posRepuesto].verCantidadVendido();
	if(vRepuestos[posRepuesto].verCantidadDisponible()>r.verCantidadDisponible()){
		cantVendida += (vRepuestos[posRepuesto].verCantidadDisponible() - 
						r.verCantidadDisponible());
	}
	vRepuestos[posRepuesto].modificarCantidadDisponible(r.verCantidadDisponible());
	vRepuestos[posRepuesto].modificarCantidadVendido(cantVendida);
}

bool Gestor::agregarCelular(Producto c){
	bool flag = true;
	for(size_t i=0;i<vCelulares.size();i++){
		if(c.verNombre()==verCelular(i).verNombre() &&
		   c.verModelo()==verCelular(i).verModelo() &&
		   c.verColor()==verCelular(i).verColor() &&
		   c.verDescripcion()==verCelular(i).verDescripcion()){
			flag = false;
		}
	}
	if(flag){
		vCelulares.push_back(c);
		return true;
	}
	return false;
}

bool Gestor::agregarAccesorio(Producto a){
	bool flag = true;
	for(size_t i=0;i<vAccesorios.size();i++){
		if(a.verNombre()==verAccesorio(i).verNombre() &&
		   a.verModelo()==verAccesorio(i).verModelo() &&
		   a.verColor()==verAccesorio(i).verColor() &&
		   a.verDescripcion()==verAccesorio(i).verDescripcion()){
			flag = false;
		}
	}
	if(flag){
		vAccesorios.push_back(a);
		return true;
	}
	return false;
}

bool Gestor::agregarRepuesto(Producto r){
	bool flag = true;
	for(size_t i=0;i<vRepuestos.size();i++){
		if(r.verNombre()==verRepuesto(i).verNombre() &&
		   r.verModelo()==verRepuesto(i).verModelo() &&
		   r.verColor()==verRepuesto(i).verColor() &&
		   r.verDescripcion()==verRepuesto(i).verDescripcion()){
			flag = false;
		}
	}
	if(flag){
		vRepuestos.push_back(r);
		return true;
	}
	return false;
}

void Gestor::modificarCantidadCelular (int pos, int cantidad) {
	vCelulares[pos].modificarCantidadDisponible(cantidad);
}

void Gestor::modificarCantidadAccesorio (int pos, int cantidad) {
	vAccesorios[pos].modificarCantidadDisponible(cantidad);
}

void Gestor::modificarCantidadRepuesto (int pos, int cantidad) {
	vRepuestos[pos].modificarCantidadDisponible(cantidad);
}

void Gestor::eliminarCelular(int posCelular){
	vCelulares.erase(vCelulares.begin()+posCelular);
}

void Gestor::eliminarAccesorio(int posAccesorio){
	vAccesorios.erase(vAccesorios.begin()+posAccesorio);
}

void Gestor::eliminarRepuesto(int posRepuesto){
	vRepuestos.erase(vRepuestos.begin()+posRepuesto);
}

void Gestor::ordenarProductos (int tipo, int op) {
	switch(tipo){
	case 1:{
			switch(op){
			case 1: sort(vCelulares.begin(),vCelulares.end(),comparacionPorNombre); break;
			case 2: sort(vCelulares.begin(),vCelulares.end(),comparacionPorModelo); break;
			case 3: sort(vCelulares.begin(),vCelulares.end(),comparacionPorColor); break;
			case 4: sort(vCelulares.begin(),vCelulares.end(),comparacionPorCosto); break;
			case 5: sort(vCelulares.begin(),vCelulares.end(),comparacionPorPrecioMinorista); break;
			case 6: sort(vCelulares.begin(),vCelulares.end(),comparacionPorPrecioMayorista); break;
			case 7: sort(vCelulares.begin(),vCelulares.end(),comparacionPorCantidadDisponible); break;
			case 8: sort(vCelulares.rbegin(),vCelulares.rend(),comparacionPorCantidadVendido); break;
			}
		}
	case 2:{
		switch(op){
			case 1: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorNombre); break;
			case 2: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorModelo); break;
			case 3: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorColor); break;
			case 4: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorCosto); break;
			case 5: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorPrecioMinorista); break;
			case 6: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorPrecioMayorista); break;	
			case 7: sort(vAccesorios.begin(),vAccesorios.end(),comparacionPorCantidadDisponible); break;	
			case 8: sort(vAccesorios.rbegin(),vAccesorios.rend(),comparacionPorCantidadVendido); break;	
			}
		}
	case 3:{
		switch(op){
			case 1: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorNombre); break;
			case 2: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorModelo); break;
			case 3: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorColor); break;
			case 4: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorCosto); break;
			case 5: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorPrecioMinorista); break;
			case 6: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorPrecioMayorista); break;	
			case 7: sort(vRepuestos.begin(),vRepuestos.end(),comparacionPorCantidadDisponible); break;	
			case 8: sort(vRepuestos.rbegin(),vRepuestos.rend(),comparacionPorCantidadVendido); break;	
			}	
		}
	}
}

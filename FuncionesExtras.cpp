#include "FuncionesExtras.h"

void pasarMinuscula(std::string &str){
	size_t cantLetras = str.size();
	for(size_t i=0;i<cantLetras;i++){
		str[i] = std::tolower(str[i]);
	}
}

bool esNumero(std::string &str){
	bool flag = false;
	for(size_t i=0;i<str.size();i++){
		if(isdigit(str[i])) flag = true;
	}
	return flag;
}
bool esLetra(std::string &str){
	bool flag = false;
	for(size_t i=0;i<str.size();i++){
		if(!isdigit(str[i])) flag = true;
	}
	return flag;
}

void primeraLetraMayuscula(std::string &str){
	str[0] = std::toupper(str[0]);
}

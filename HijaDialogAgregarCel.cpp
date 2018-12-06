#include "HijaDialogAgregarCel.h"
#include "Producto.h"
#include "Gestor.h"
#include <wx/msgdlg.h>

HijaDialogAgregarCel::HijaDialogAgregarCel(wxWindow *parent, Gestor *gestor) : 
	DialogAgregarCel(parent), m_gestor(gestor){
	SetTitle("Agregar celular");
}

HijaDialogAgregarCel::~HijaDialogAgregarCel() {
	
}

void HijaDialogAgregarCel::clickBotonCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogAgregarCel::clickBotonAgregar( wxCommandEvent& event )  {
	Producto cel;
	cel.modificarNombre(cuadroMarca->GetValue().ToStdString());
	cel.modificarModelo(cuadroModelo->GetValue().ToStdString());
	cel.modificarDescripcion(cuadroModelo->GetValue().ToStdString());
	cel.modificarColor(cuadroColor->GetValue().ToStdString());
	cel.modificarCosto(cuadroCosto->GetValue().ToStdString());
	cel.modificarPrecioMinorista(cuadroPrecioMinorista->GetValue().ToStdString());
	cel.modificarPrecioMayorista(cuadroPrecioMayorista->GetValue().ToStdString());
	cel.modificarCantidadDisponible(wxAtoi(cuadroCantidadDisponible->GetValue()));
	cel.modificarCantidadVendido(0);
	std::string err = cel.validarDatos();
	if(err.size()){
		wxMessageBox(wxString(err),wxString("Error"),wxOK|wxICON_ERROR,this);
	}else{
		m_gestor->agregarCelular(cel);
		EndModal(1);
	}
}


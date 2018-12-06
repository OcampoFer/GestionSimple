#include "HijaDialogModificarCel.h"
#include "Gestor.h"
#include "Producto.h"
#include <wx/msgdlg.h>

HijaDialogModificarCel::HijaDialogModificarCel(wxWindow *parent, Gestor *gestor, int posFila) :
	DialogAgregarCel(parent), m_gestor(gestor), posFila(posFila) {
	SetTitle("Modificar celular"); Producto aux = m_gestor->verCelular(posFila);
	cuadroMarca->SetValue(wxString(aux.verNombre()));
	cuadroModelo->SetValue(wxString(aux.verModelo()));
	cuadroDescripcion->SetValue(wxString(aux.verDescripcion()));
	cuadroColor->SetValue(wxString(aux.verColor()));
	cuadroCosto->SetValue(wxString(aux.verCosto()));
	cuadroPrecioMinorista->SetValue(wxString(aux.verPrecioMinorista()));
	cuadroPrecioMayorista->SetValue(wxString(aux.verPrecioMayorista()));
	wxString cantDisponible; cantDisponible << aux.verCantidadDisponible();
	cuadroCantidadDisponible->SetValue(cantDisponible);
}

void HijaDialogModificarCel::clickBotonCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogModificarCel::clickBotonAgregar( wxCommandEvent& event )  {
	Producto aux;
	aux.modificarNombre(cuadroMarca->GetValue().ToStdString());
	aux.modificarModelo(cuadroModelo->GetValue().ToStdString());
	aux.modificarDescripcion(cuadroDescripcion->GetValue().ToStdString());
	aux.modificarColor(cuadroColor->GetValue().ToStdString());
	aux.modificarCosto(cuadroCosto->GetValue().ToStdString());
	aux.modificarPrecioMinorista(cuadroPrecioMinorista->GetValue().ToStdString());
	aux.modificarPrecioMayorista(cuadroPrecioMayorista->GetValue().ToStdString());
	aux.modificarCantidadDisponible(wxAtoi(cuadroCantidadDisponible->GetValue()));
	std::string err = aux.validarDatos();
	if(err.size()){
		wxMessageBox(wxString(err),wxString("Error"),wxOK|wxICON_ERROR,this);
	}else{
		m_gestor->modificarCelular(aux,posFila);
		EndModal(1);
	}
}

HijaDialogModificarCel::~HijaDialogModificarCel() {
	
}


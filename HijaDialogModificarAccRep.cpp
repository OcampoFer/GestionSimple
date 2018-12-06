#include "HijaDialogModificarAccRep.h"
#include "Producto.h"
#include "Gestor.h"
#include <wx/msgdlg.h>

HijaDialogModificarAccRep::HijaDialogModificarAccRep(wxWindow *parent, Gestor *gestor, int grillaActual,
													 int posFila) :
	DialogAgregarAccRep(parent), m_gestor(gestor){
	this->grillaActual = grillaActual;
	this->posFila = posFila;
	switch(grillaActual){
	case 2: SetTitle("Modificar accesorio"); break;
	case 3: SetTitle("Modificar repuesto"); break;
	}
	Producto aux = m_gestor->verCelular(posFila);
	cuadroTipo->SetValue(wxString(aux.verNombre()));
	cuadroModelo->SetValue(wxString(aux.verModelo()));
	cuadroDescripcion->SetValue(wxString(aux.verDescripcion()));
	cuadroColor->SetValue(wxString(aux.verColor()));
	cuadroCosto->SetValue(wxString(aux.verCosto()));
	cuadroPrecioMinorista->SetValue(wxString(aux.verPrecioMinorista()));
	cuadroPrecioMayorista->SetValue(wxString(aux.verPrecioMayorista()));
	wxString cantDisponible; cantDisponible << aux.verCantidadDisponible();
	cuadroCantidadDisponible->SetValue(cantDisponible);
}

void HijaDialogModificarAccRep::clickBotonCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogModificarAccRep::clickBotonAgregar( wxCommandEvent& event )  {
	Producto aux;
	aux.modificarNombre(cuadroTipo->GetValue().ToStdString());
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
		switch(grillaActual){
		case 2: m_gestor->modificarAccesorio(aux,posFila); break;
		case 3: m_gestor->modificarRepuesto(aux,posFila); break;
		}
		EndModal(1);
	}
}

HijaDialogModificarAccRep::~HijaDialogModificarAccRep() {
	
}


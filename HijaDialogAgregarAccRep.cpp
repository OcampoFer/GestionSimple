#include "HijaDialogAgregarAccRep.h"
#include "Producto.h"
#include "Gestor.h"
#include <wx/msgdlg.h>

HijaDialogAgregarAccRep::HijaDialogAgregarAccRep(wxWindow *parent, Gestor *gestor,
												 int grillaActual) : DialogAgregarAccRep(parent),
m_gestor(gestor), grillaActual(grillaActual){
	switch(grillaActual){
	case 2: SetTitle("Agregar accesorio"); break;
	case 3: SetTitle("Agregar repuesto"); break;
	}
}

void HijaDialogAgregarAccRep::clickBotonCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogAgregarAccRep::clickBotonAgregar( wxCommandEvent& event )  {
	Producto cel;
	cel.modificarNombre(cuadroTipo->GetValue().ToStdString());
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
		switch(grillaActual){
		case 2: m_gestor->agregarAccesorio(cel); ; break;
		case 3: m_gestor->agregarRepuesto(cel); break;
		}
		EndModal(1);
	}
}

HijaDialogAgregarAccRep::~HijaDialogAgregarAccRep() {
	
}


#include "HijaDialogManejoStockVenta.h"
#include "Producto.h"
#include "Gestor.h"

HijaDialogManejoStockVenta::HijaDialogManejoStockVenta(wxWindow *parent, Gestor *gestor, int posFila,
													   int grillaActual) :
	DialogManejoStockVenta(parent), m_gestor(gestor), posFila(posFila), grillaActual(grillaActual) {
	SetTitle(wxString("Stock"));
	Producto p;
	switch(grillaActual){
	case 1: p = m_gestor->verCelular(posFila); staticMarca1->SetLabel(wxString("Marca:")); break;
	case 2: p = m_gestor->verAccesorio(posFila); staticMarca1->SetLabel(wxString("Tipo:")); break;
	case 3: p = m_gestor->verRepuesto(posFila); staticMarca1->SetLabel(wxString("Tipo:")); break;
	}
	staticMarca2->SetLabel(wxString(p.verNombre()));
	staticModelo1->SetLabel(wxString("Modelo:"));
	staticModelo2->SetLabel(wxString(p.verModelo()));
	staticColor1->SetLabel(wxString("Color:"));
	staticColor2->SetLabel(wxString(p.verColor()));
	wxString cantDisponibles; cantDisponibles << p.verCantidadDisponible();
	m_spinCtrl1->SetValue(cantDisponibles);	
}

void HijaDialogManejoStockVenta::clickCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogManejoStockVenta::clickAceptar( wxCommandEvent& event )  {
	int cantidadDisponible = m_spinCtrl1->GetValue();
	switch(grillaActual){
	case 1: m_gestor->verCelular(posFila).modificarCantidadDisponible(cantidadDisponible); break;
	case 2: m_gestor->verAccesorio(posFila).modificarCantidadDisponible(cantidadDisponible); break;
	case 3: m_gestor->verRepuesto(posFila).modificarCantidadDisponible(cantidadDisponible); break;
	}
	EndModal(1);
}

HijaDialogManejoStockVenta::~HijaDialogManejoStockVenta() {
	
}


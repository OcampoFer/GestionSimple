#include "HijaDialogManejoVenta.h"
#include "Producto.h"
#include "Gestor.h"

HijaDialogManejoVenta::HijaDialogManejoVenta(wxWindow *parent, Gestor *gestor, int posFila,
											 int grillaActual) : DialogManejoStockVenta(parent),
	m_gestor(gestor), posFila(posFila), grillaActual(grillaActual) {
	SetTitle(wxString("Vendidos"));
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
	wxString cantVendidos; cantVendidos << p.verCantidadVendido();
	m_spinCtrl1->SetValue(cantVendidos);	
}

void HijaDialogManejoVenta::clickCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

void HijaDialogManejoVenta::clickAceptar( wxCommandEvent& event )  {
	int cantidadVendidos = m_spinCtrl1->GetValue();
	switch(grillaActual){
	case 1: m_gestor->verCelular(posFila).modificarCantidadVendido(cantidadVendidos); break;
	case 2: m_gestor->verAccesorio(posFila).modificarCantidadVendido(cantidadVendidos); break;
	case 3: m_gestor->verRepuesto(posFila).modificarCantidadVendido(cantidadVendidos); break;
	}
	EndModal(1);
}

HijaDialogManejoVenta::~HijaDialogManejoVenta() {
	
}


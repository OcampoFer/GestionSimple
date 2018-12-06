#include "HijaVentanaPrincipal.h"
#include "Producto.h"
#include "Gestor.h"
#include <wx/msgdlg.h>
#include "HijaDialogAgregarCel.h"
#include "HijaDialogAgregarAccRep.h"
#include "HijaDialogModificarCel.h"
#include "HijaDialogModificarAccRep.h"
#include "HijaDialogSinStock.h"
#include "HijaDialogRanking.h"
#include "HijaDialogManejoStockVenta.h"
#include "HijaDialogManejoVenta.h"

void HijaVentanaPrincipal::cargarFila(int pos){
	switch(grillaActual){
	case 1:{
		Producto &p = m_gestor->verCelular(pos);
		grillaPrincipal->SetCellValue(pos,0,wxString(p.verNombre()));
		grillaPrincipal->SetCellValue(pos,1,wxString(p.verModelo()));
		grillaPrincipal->SetCellValue(pos,2,wxString(p.verDescripcion()));
		grillaPrincipal->SetCellValue(pos,3,wxString(p.verColor()));
		grillaPrincipal->SetCellValue(pos,4,wxString(p.verCosto()));
		grillaPrincipal->SetCellValue(pos,5,wxString(p.verPrecioMinorista()));
		grillaPrincipal->SetCellValue(pos,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadDisponible();
		grillaPrincipal->SetCellValue(pos,7,stock);
		wxString vendido; vendido << p.verCantidadVendido();
		grillaPrincipal->SetCellValue(pos,8,vendido);
		break;
		}
	case 2:{
		Producto &p = m_gestor->verAccesorio(pos);
		grillaPrincipal->SetCellValue(pos,0,wxString(p.verNombre()));
		grillaPrincipal->SetCellValue(pos,1,wxString(p.verModelo()));
		grillaPrincipal->SetCellValue(pos,2,wxString(p.verDescripcion()));
		grillaPrincipal->SetCellValue(pos,3,wxString(p.verColor()));
		grillaPrincipal->SetCellValue(pos,4,wxString(p.verCosto()));
		grillaPrincipal->SetCellValue(pos,5,wxString(p.verPrecioMinorista()));
		grillaPrincipal->SetCellValue(pos,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadDisponible();
		grillaPrincipal->SetCellValue(pos,7,stock);
		wxString vendido; vendido << p.verCantidadVendido();
		grillaPrincipal->SetCellValue(pos,8,vendido);
		break;
		}
	case 3:{
		Producto &p = m_gestor->verRepuesto(pos);
		grillaPrincipal->SetCellValue(pos,0,wxString(p.verNombre()));
		grillaPrincipal->SetCellValue(pos,1,wxString(p.verModelo()));
		grillaPrincipal->SetCellValue(pos,2,wxString(p.verDescripcion()));
		grillaPrincipal->SetCellValue(pos,3,wxString(p.verColor()));
		grillaPrincipal->SetCellValue(pos,4,wxString(p.verCosto()));
		grillaPrincipal->SetCellValue(pos,5,wxString(p.verPrecioMinorista()));
		grillaPrincipal->SetCellValue(pos,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadDisponible();
		grillaPrincipal->SetCellValue(pos,7,stock);
		wxString vendido; vendido << p.verCantidadVendido();
		grillaPrincipal->SetCellValue(pos,8,vendido);
		break;
		}
	}
}

HijaVentanaPrincipal::HijaVentanaPrincipal(Gestor *gestor) : VentanaPrincipal(nullptr),
m_gestor(gestor){
	grillaActual = 1;
	int cantidadCelulares = m_gestor->cantCelulares();
	cantFilasActual = cantidadCelulares;
	grillaPrincipal->AppendRows(cantidadCelulares);
	for(int i=0;i<cantidadCelulares;i++) cargarFila(i);
	grillaPrincipal->SetSelectionMode(wxGrid::wxGridSelectRows);	
}

void HijaVentanaPrincipal::clickCelulares( wxCommandEvent& event )  {
	grillaActual = 1; if(cantFilasActual!=0) grillaPrincipal->DeleteRows(0,cantFilasActual);
	int cantidadCelulares = m_gestor->cantCelulares();
	cantFilasActual = cantidadCelulares;
	grillaPrincipal->AppendRows(cantidadCelulares);
	for(int i=0;i<cantidadCelulares;i++) cargarFila(i);
}

void HijaVentanaPrincipal::clickAccesorios( wxCommandEvent& event )  {
	grillaActual = 2; if(cantFilasActual!=0) grillaPrincipal->DeleteRows(0,cantFilasActual);
	int cantidadAccesorios = m_gestor->cantAccesorios();
	cantFilasActual = cantidadAccesorios;
	grillaPrincipal->AppendRows(cantidadAccesorios);
	for(int i=0;i<cantidadAccesorios;i++) cargarFila(i);
}

void HijaVentanaPrincipal::clickRepuestos( wxCommandEvent& event )  {
	grillaActual = 3; if(cantFilasActual!=0) grillaPrincipal->DeleteRows(0,cantFilasActual);
	int cantidadRepuestos = m_gestor->cantRepuestos();
	cantFilasActual = cantidadRepuestos;
	grillaPrincipal->AppendRows(cantidadRepuestos);
	for(int i=0;i<cantidadRepuestos;i++) cargarFila(i);
}

void HijaVentanaPrincipal::clickSinStock( wxCommandEvent& event )  {
	if(m_gestor->productoSinStock().size()!=0){
		HijaDialogSinStock ventana(this,m_gestor);
		ventana.ShowModal();
	}else{
		wxMessageBox(wxString("No hay productos sin stock"),wxString("Error"),wxYES_DEFAULT);
	}
}

void HijaVentanaPrincipal::clickRanking( wxCommandEvent& event )  {
	HijaDialogRanking ventana(this,m_gestor);
	ventana.ShowModal();
}

void HijaVentanaPrincipal::clickAgregar( wxCommandEvent& event )  {
	switch(grillaActual){
	case 1:{
		HijaDialogAgregarCel ventana(this,m_gestor);
		if(ventana.ShowModal()==1){
			grillaPrincipal->AppendRows(1); cantFilasActual++;
			cargarFila(m_gestor->cantCelulares()-1);
		}
		break;
	}
	case 2:{
		HijaDialogAgregarAccRep ventana(this,m_gestor,grillaActual);
		if(ventana.ShowModal()==1){
			grillaPrincipal->AppendRows(1); cantFilasActual++;
			cargarFila(m_gestor->cantAccesorios()-1);			
		}
		break;
	}
	case 3:{
		HijaDialogAgregarAccRep ventana(this,m_gestor,grillaActual);
		if(ventana.ShowModal()==1){
			grillaPrincipal->AppendRows(1); cantFilasActual++;
			cargarFila(m_gestor->cantRepuestos()-1);
		}
		break;
	}
	}
}

void HijaVentanaPrincipal::clickModificar( wxCommandEvent& event )  {
	int posFila = grillaPrincipal->GetGridCursorRow();
	switch(grillaActual){
	case 1:{
		HijaDialogModificarCel ventana(this,m_gestor,posFila);
		if(ventana.ShowModal()==1){
			cargarFila(posFila);
		}
		break;
	}
	case 2:{
		HijaDialogModificarAccRep ventana(this,m_gestor,grillaActual,posFila);
		if(ventana.ShowModal()==1){
			cargarFila(posFila);
		}
		break;
	}
	case 3:
		HijaDialogModificarAccRep ventana(this,m_gestor,grillaActual,posFila);
		if(ventana.ShowModal()==1){
			cargarFila(posFila);
		}
		break;
	}
}

void HijaVentanaPrincipal::clickEliminar( wxCommandEvent& event )  {
	int cant=0;
	switch(grillaActual){
	case 1: cant = m_gestor->cantCelulares(); break;
	case 2: cant = m_gestor->cantAccesorios(); break;
	case 3: cant = m_gestor->cantRepuestos(); break;
	}
	if(cant!=0){
		int posFila =  grillaPrincipal->GetGridCursorRow();
		wxString nombre; nombre << grillaPrincipal->GetCellValue(posFila,0) << " " <<
			grillaPrincipal->GetCellValue(posFila,1);
		int respuesta = wxMessageBox(wxString("Desea eliminar este producto?"),
									 nombre,wxYES_NO);
		if(respuesta==wxYES){
			grillaPrincipal->DeleteRows(posFila,1); cantFilasActual--;
			switch(grillaActual){
			case 1: m_gestor->eliminarCelular(posFila); break;
			case 2: m_gestor->eliminarAccesorio(posFila); break;
			case 3: m_gestor->eliminarRepuesto(posFila); break;
			}
		}	
	}else{
		wxMessageBox(wxString("No hay productos para eliminar"),wxString("Error"),wxYES_DEFAULT);
	}
	
}

void HijaVentanaPrincipal::clickModificarStock( wxCommandEvent& event )  {
	int cant=0;
	switch(grillaActual){
	case 1: cant = m_gestor->cantCelulares(); break;
	case 2: cant = m_gestor->cantAccesorios(); break;
	case 3: cant = m_gestor->cantRepuestos(); break;
	}
	if(cant!=0){
		int posFila = grillaPrincipal->GetGridCursorRow();
		HijaDialogManejoStockVenta ventana(this,m_gestor,posFila,grillaActual);
		if(ventana.ShowModal()==1){
			cargarFila(posFila);	
		}
	}else{
		wxMessageBox(wxString("No hay productos para modificar"),wxString("Error"),wxYES_DEFAULT);
	}
}

void HijaVentanaPrincipal::clickModificarVendidos( wxCommandEvent& event )  {
	int cant=0;
	switch(grillaActual){
	case 1: cant = m_gestor->cantCelulares(); break;
	case 2: cant = m_gestor->cantAccesorios(); break;
	case 3: cant = m_gestor->cantRepuestos(); break;
	}
	if(cant!=0){
		int posFila = grillaPrincipal->GetGridCursorRow();
		HijaDialogManejoVenta ventana(this,m_gestor,posFila,grillaActual);
		if(ventana.ShowModal()==1){
			cargarFila(posFila);	
		}
	}else{
		wxMessageBox(wxString("No hay productos para modificar"),wxString("Error"),wxYES_DEFAULT);
	}
}

void HijaVentanaPrincipal::clickDobleGrilla( wxGridEvent& event )  {
	event.Skip();
}

void HijaVentanaPrincipal::clickLabelGrilla( wxGridEvent& event )  {
	int columna = event.GetCol(), cantProductos=0;
	if(columna!=2){
		switch(columna){
		case 0: columna = 1; break;
		case 1: columna = 2; break;
		case 3: columna = 3; break;
		case 4: columna = 4; break;
		case 5: columna = 5; break;
		case 6: columna = 6; break;
		case 7: columna = 7; break;
		case 8: columna = 8; break;
		}
		m_gestor->ordenarProductos(grillaActual,columna);
		switch(grillaActual){
		case 1: cantProductos = m_gestor->cantCelulares(); break;
		case 2: cantProductos = m_gestor->cantAccesorios(); break;
		case 3: cantProductos = m_gestor->cantRepuestos(); break;
		}
		for(int i=0;i<cantProductos;i++) cargarFila(i);
	}
}

HijaVentanaPrincipal::~HijaVentanaPrincipal() {
	
}

void HijaVentanaPrincipal::cambiaTamanio( wxSizeEvent& event )  {
	Layout();
	int tamanios[8], medidaAnterior=0;
	for(int i=0;i<9;i++){
		tamanios[i] = grillaPrincipal->GetColSize(i);
		medidaAnterior += tamanios[i];
	}
	
	int medidaNueva = grillaPrincipal->GetSize().GetWidth();
	grillaPrincipal->BeginBatch();
	for(int i=0;i<9;i++){
		grillaPrincipal->SetColSize(i,tamanios[i]*medidaNueva/medidaAnterior);
	}
	grillaPrincipal->EndBatch();
}

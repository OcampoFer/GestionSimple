#include "HijaDialogRanking.h"
#include "Gestor.h"
#include <vector>
#include "Producto.h"

HijaDialogRanking::HijaDialogRanking(wxWindow *parent, Gestor *gestor) : 
	DialogRanking(parent), m_gestor(gestor) {
	SetTitle("Ranking de productos mas vendidos");
	std::vector<Producto> vProductos = m_gestor->celularesMasVendido();
	std::vector<Producto> vAccesorios = m_gestor->accesoriosMasVendido();
	std::vector<Producto> vRepuestos = m_gestor->repuestosMasVendido();
	grillaRankingCelular->AppendRows(vProductos.size());
	grillaRankingAccesorios->AppendRows(vAccesorios.size());
	grillaRankingRepuestos->AppendRows(vRepuestos.size());
	for(size_t i=0;i<vProductos.size();i++){
		Producto &p = vProductos[i];
		grillaRankingCelular->SetCellValue(i,0,wxString(p.verNombre()));
		grillaRankingCelular->SetCellValue(i,1,wxString(p.verModelo()));
		grillaRankingCelular->SetCellValue(i,2,wxString(p.verDescripcion()));
		grillaRankingCelular->SetCellValue(i,3,wxString(p.verColor()));
		grillaRankingCelular->SetCellValue(i,4,wxString(p.verCosto()));
		grillaRankingCelular->SetCellValue(i,5,wxString(p.verPrecioMinorista()));
		grillaRankingCelular->SetCellValue(i,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadVendido();
		grillaRankingCelular->SetCellValue(i,7,stock);
		grillaRankingCelular->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
	for(size_t i=0;i<vAccesorios.size();i++){
		Producto &p = vAccesorios[i];
		grillaRankingAccesorios->SetCellValue(i,0,wxString(p.verNombre()));
		grillaRankingAccesorios->SetCellValue(i,1,wxString(p.verModelo()));
		grillaRankingAccesorios->SetCellValue(i,2,wxString(p.verDescripcion()));
		grillaRankingAccesorios->SetCellValue(i,3,wxString(p.verColor()));
		grillaRankingAccesorios->SetCellValue(i,4,wxString(p.verCosto()));
		grillaRankingAccesorios->SetCellValue(i,5,wxString(p.verPrecioMinorista()));
		grillaRankingAccesorios->SetCellValue(i,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadVendido();
		grillaRankingAccesorios->SetCellValue(i,7,stock);
		grillaRankingAccesorios->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
	for(size_t i=0;i<vRepuestos.size();i++){
		Producto &p = vRepuestos[i];
		grillaRankingRepuestos->SetCellValue(i,0,wxString(p.verNombre()));
		grillaRankingRepuestos->SetCellValue(i,1,wxString(p.verModelo()));
		grillaRankingRepuestos->SetCellValue(i,2,wxString(p.verDescripcion()));
		grillaRankingRepuestos->SetCellValue(i,3,wxString(p.verColor()));
		grillaRankingRepuestos->SetCellValue(i,4,wxString(p.verCosto()));
		grillaRankingRepuestos->SetCellValue(i,5,wxString(p.verPrecioMinorista()));
		grillaRankingRepuestos->SetCellValue(i,6,wxString(p.verPrecioMayorista()));
		wxString stock; stock << p.verCantidadVendido();
		grillaRankingRepuestos->SetCellValue(i,7,stock);
		grillaRankingRepuestos->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
}

void HijaDialogRanking::clickCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

HijaDialogRanking::~HijaDialogRanking() {
	
}

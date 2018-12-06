#include "HijaDialogSinStock.h"
#include <vector>
#include "Gestor.h"
#include "Producto.h"

HijaDialogSinStock::HijaDialogSinStock(wxWindow *parent, Gestor *gestor) :
	DialogSinStock(parent), m_gestor(gestor) {
	std::vector<Producto> aux = m_gestor->productoSinStock();
	grillaSinStock->AppendRows(aux.size());
	for(size_t i=0;i<aux.size();i++){
		grillaSinStock->SetCellValue(i,0,wxString(aux[i].verNombre()));
		grillaSinStock->SetCellValue(i,1,wxString(aux[i].verModelo()));
		grillaSinStock->SetCellValue(i,2,wxString(aux[i].verDescripcion()));
		grillaSinStock->SetCellValue(i,3,wxString(aux[i].verColor()));
		grillaSinStock->SetCellValue(i,4,wxString(aux[i].verCosto()));
		grillaSinStock->SetCellValue(i,5,wxString(aux[i].verPrecioMinorista()));
		grillaSinStock->SetCellValue(i,6,wxString(aux[i].verPrecioMayorista()));
		wxString stock; stock << aux[i].verCantidadVendido();
		grillaSinStock->SetCellValue(i,7,stock);
		grillaSinStock->SetSelectionMode(wxGrid::wxGridSelectRows);
	}
}

void HijaDialogSinStock::clickCerrar( wxCommandEvent& event )  {
	EndModal(0);
}

HijaDialogSinStock::~HijaDialogSinStock() {
	
}


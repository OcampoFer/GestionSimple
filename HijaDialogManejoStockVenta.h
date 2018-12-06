#ifndef HIJADIALOGMANEJOSTOCKVENTA_H
#define HIJADIALOGMANEJOSTOCKVENTA_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogManejoStockVenta : public DialogManejoStockVenta {
	
private:
	Gestor *m_gestor;
	int posFila,grillaActual;
protected:
	void clickCerrar( wxCommandEvent& event )  override;
	void clickAceptar( wxCommandEvent& event )  override;
	
public:
	HijaDialogManejoStockVenta(wxWindow *parent,Gestor *gestor,int posFila,int grillaActual);
	~HijaDialogManejoStockVenta();
};

#endif


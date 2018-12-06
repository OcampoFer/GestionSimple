#ifndef HIJADIALOGMANEJOVENTA_H
#define HIJADIALOGMANEJOVENTA_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogManejoVenta : public DialogManejoStockVenta {
	
private:
	Gestor *m_gestor;
	int posFila,grillaActual;
protected:
	void clickCerrar( wxCommandEvent& event )  override;
	void clickAceptar( wxCommandEvent& event )  override;
	
public:
	HijaDialogManejoVenta(wxWindow *parent,Gestor *gestor,int posFila,int grillaActual);
	~HijaDialogManejoVenta();
};

#endif


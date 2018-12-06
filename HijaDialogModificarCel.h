#ifndef HIJADIALOGMODIFICARCEL_H
#define HIJADIALOGMODIFICARCEL_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogModificarCel : public DialogAgregarCel {
	
private:
	Gestor *m_gestor;
	int posFila;
protected:
	void clickBotonCerrar( wxCommandEvent& event )  override;
	void clickBotonAgregar( wxCommandEvent& event )  override;
	
public:
	HijaDialogModificarCel(wxWindow *parent, Gestor *gestor,int posFila);
	~HijaDialogModificarCel();
};

#endif


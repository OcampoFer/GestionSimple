#ifndef HIJADIALOGAGREGARCEL_H
#define HIJADIALOGAGREGARCEL_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogAgregarCel : public DialogAgregarCel {
	
private:
	Gestor *m_gestor;
protected:
	void clickBotonCerrar( wxCommandEvent& event )  override;
	void clickBotonAgregar( wxCommandEvent& event )  override;
public:
	HijaDialogAgregarCel(wxWindow *parent,Gestor *gestor);
	~HijaDialogAgregarCel();
};

#endif


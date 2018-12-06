#ifndef HIJADIALOGAGREGARACCREP_H
#define HIJADIALOGAGREGARACCREP_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogAgregarAccRep : public DialogAgregarAccRep {
	
private:
	Gestor *m_gestor;
	int grillaActual;
protected:
	void clickBotonCerrar( wxCommandEvent& event )  override;
	void clickBotonAgregar( wxCommandEvent& event )  override;
	
public:
	HijaDialogAgregarAccRep(wxWindow *parent,Gestor *gestor,int grillaActual);
	~HijaDialogAgregarAccRep();
};

#endif


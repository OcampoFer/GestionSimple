#ifndef HIJADIALOGMODIFICARACCREP_H
#define HIJADIALOGMODIFICARACCREP_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogModificarAccRep : public DialogAgregarAccRep {
	
private:
	Gestor *m_gestor;
	int posFila,grillaActual;
protected:
	void clickBotonCerrar( wxCommandEvent& event )  override;
	void clickBotonAgregar( wxCommandEvent& event )  override;
	
public:
	HijaDialogModificarAccRep(wxWindow *parent, Gestor *gestor, int grillaActual, int posFila);
	~HijaDialogModificarAccRep();
};

#endif


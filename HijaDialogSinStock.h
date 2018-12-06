#ifndef HIJADIALOGSINSTOCK_H
#define HIJADIALOGSINSTOCK_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogSinStock : public DialogSinStock {
	
private:
	Gestor *m_gestor;
protected:
	void clickCerrar( wxCommandEvent& event )  override;
	
public:
	HijaDialogSinStock(wxWindow *parent,Gestor *gestor);
	~HijaDialogSinStock();
};

#endif


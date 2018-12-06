#ifndef HIJADIALOGRANKING_H
#define HIJADIALOGRANKING_H
#include "wxfb_project.h"

class Gestor;

class HijaDialogRanking : public DialogRanking {
	
private:
	Gestor *m_gestor;
protected:
	void clickCerrar( wxCommandEvent& event )  override;
	
public:
	HijaDialogRanking(wxWindow *parent,Gestor *gestor);
	~HijaDialogRanking();
};

#endif


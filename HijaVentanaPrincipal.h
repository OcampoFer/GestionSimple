#ifndef HIJAVENTANAPRINCIPAL_H
#define HIJAVENTANAPRINCIPAL_H
#include "wxfb_project.h"

class Gestor;

class HijaVentanaPrincipal : public VentanaPrincipal {
	
private:
	Gestor *m_gestor;
	int grillaActual,cantFilasActual;
	void cargarFila(int pos);
protected:
	void cambiaTamanio( wxSizeEvent& event )  override;
	void clickRepuestos( wxCommandEvent& event )  override;
	void clickCelulares( wxCommandEvent& event )  override;
	void clickAccesorios( wxCommandEvent& event )  override;
	void clickSinStock( wxCommandEvent& event )  override;
	void clickRanking( wxCommandEvent& event )  override;
	void clickAgregar( wxCommandEvent& event )  override;
	void clickModificar( wxCommandEvent& event )  override;
	void clickEliminar( wxCommandEvent& event )  override;
	void clickModificarStock( wxCommandEvent& event )  override;
	void clickModificarVendidos( wxCommandEvent& event )  override;
	void clickDobleGrilla( wxGridEvent& event )  override;
	void clickLabelGrilla( wxGridEvent& event )  override;
	
public:
	HijaVentanaPrincipal(Gestor *gestor);
	~HijaVentanaPrincipal();
};

#endif


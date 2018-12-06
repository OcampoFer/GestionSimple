#include <wx/image.h>
#include "Application.h"
#include "HijaVentanaPrincipal.h"
	
Application::Application() : m_gestor("celulares.dat","accesorios.dat","repuestos.dat"){
	
}

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaVentanaPrincipal *win = new HijaVentanaPrincipal(&m_gestor);
	win->Show();
	return true;
}

IMPLEMENT_APP(Application)

#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Gestor.h"

class Application : public wxApp {
private:
	Gestor m_gestor;
public:
	Application();
	virtual bool OnInit();
};

#endif

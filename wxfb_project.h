///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  3 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/sizer.h>
#include <wx/gdicmn.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/grid.h>
#include <wx/frame.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/dialog.h>
#include <wx/spinctrl.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class VentanaPrincipal
///////////////////////////////////////////////////////////////////////////////
class VentanaPrincipal : public wxFrame
{
	private:

	protected:
		wxButton* m_boton2;
		wxButton* m_boton3;
		wxButton* m_boton4;
		wxButton* m_boton5;
		wxButton* m_boton6;
		wxButton* m_boton7;
		wxButton* m_boton8;
		wxButton* m_boton9;
		wxButton* m_boton10;
		wxButton* m_boton11;
		wxGrid* grillaPrincipal;

		// Virtual event handlers, overide them in your derived class
		virtual void cambiaTamanio( wxSizeEvent& event ) { event.Skip(); }
		virtual void clickCelulares( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickAccesorios( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickRepuestos( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickSinStock( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickRanking( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickAgregar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickModificar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickEliminar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickModificarStock( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickModificarVendidos( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickDobleGrilla( wxGridEvent& event ) { event.Skip(); }
		virtual void clickLabelGrilla( wxGridEvent& event ) { event.Skip(); }


	public:

		VentanaPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1300,700 ), long style = wxCAPTION|wxCLOSE_BOX|wxMAXIMIZE|wxMINIMIZE_BOX|wxTAB_TRAVERSAL );

		~VentanaPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarCel
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarCel : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* cuadroMarca;
		wxStaticText* m_staticText2;
		wxTextCtrl* cuadroModelo;
		wxStaticText* m_staticText3;
		wxTextCtrl* cuadroDescripcion;
		wxStaticText* m_staticText4;
		wxTextCtrl* cuadroColor;
		wxStaticText* m_staticText5;
		wxTextCtrl* cuadroCosto;
		wxStaticText* m_staticText6;
		wxTextCtrl* cuadroPrecioMinorista;
		wxStaticText* m_staticText7;
		wxTextCtrl* cuadroPrecioMayorista;
		wxStaticText* m_staticText8;
		wxTextCtrl* cuadroCantidadDisponible;
		wxButton* botonCerrar;
		wxButton* botonAgregar;

		// Virtual event handlers, overide them in your derived class
		virtual void clickBotonCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickBotonAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogAgregarCel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );
		~DialogAgregarCel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogAgregarAccRep
///////////////////////////////////////////////////////////////////////////////
class DialogAgregarAccRep : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText9;
		wxTextCtrl* cuadroTipo;
		wxStaticText* m_staticText10;
		wxTextCtrl* cuadroModelo;
		wxStaticText* m_staticText11;
		wxTextCtrl* cuadroDescripcion;
		wxStaticText* m_staticText12;
		wxTextCtrl* cuadroColor;
		wxStaticText* m_staticText13;
		wxTextCtrl* cuadroCosto;
		wxStaticText* m_staticText14;
		wxTextCtrl* cuadroPrecioMinorista;
		wxStaticText* m_staticText15;
		wxTextCtrl* cuadroPrecioMayorista;
		wxStaticText* m_staticText16;
		wxTextCtrl* cuadroCantidadDisponible;
		wxButton* botonCerrar;
		wxButton* botonAgregar;

		// Virtual event handlers, overide them in your derived class
		virtual void clickBotonCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickBotonAgregar( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogAgregarAccRep( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );
		~DialogAgregarAccRep();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogSinStock
///////////////////////////////////////////////////////////////////////////////
class DialogSinStock : public wxDialog
{
	private:

	protected:
		wxGrid* grillaSinStock;
		wxButton* m_button16;

		// Virtual event handlers, overide them in your derived class
		virtual void clickCerrar( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogSinStock( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Productos sin stock"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );
		~DialogSinStock();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogRanking
///////////////////////////////////////////////////////////////////////////////
class DialogRanking : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxGrid* grillaRankingCelular;
		wxStaticText* m_staticText18;
		wxGrid* grillaRankingAccesorios;
		wxStaticText* m_staticText19;
		wxGrid* grillaRankingRepuestos;
		wxButton* botonCerrar;

		// Virtual event handlers, overide them in your derived class
		virtual void clickCerrar( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogRanking( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );
		~DialogRanking();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DialogManejoStockVenta
///////////////////////////////////////////////////////////////////////////////
class DialogManejoStockVenta : public wxDialog
{
	private:

	protected:
		wxStaticText* staticMarca1;
		wxStaticText* staticMarca2;
		wxStaticText* staticModelo1;
		wxStaticText* staticModelo2;
		wxStaticText* staticColor1;
		wxStaticText* staticColor2;
		wxStaticText* m_staticText26;
		wxSpinCtrl* m_spinCtrl1;
		wxButton* m_button18;
		wxButton* m_button19;

		// Virtual event handlers, overide them in your derived class
		virtual void clickCerrar( wxCommandEvent& event ) { event.Skip(); }
		virtual void clickAceptar( wxCommandEvent& event ) { event.Skip(); }


	public:

		DialogManejoStockVenta( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );
		~DialogManejoStockVenta();

};


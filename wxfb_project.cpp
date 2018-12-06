///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  3 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

VentanaPrincipal::VentanaPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );


	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	m_boton2 = new wxButton( this, wxID_ANY, wxT("Celulares"), wxDefaultPosition, wxDefaultSize, 0 );
	m_boton2->SetMinSize( wxSize( -1,50 ) );

	bSizer3->Add( m_boton2, 1, wxALL|wxEXPAND, 5 );

	m_boton3 = new wxButton( this, wxID_ANY, wxT("Accesorios"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_boton3, 1, wxALL|wxEXPAND, 5 );

	m_boton4 = new wxButton( this, wxID_ANY, wxT("Repuestos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_boton4, 1, wxALL|wxEXPAND, 5 );

	m_boton5 = new wxButton( this, wxID_ANY, wxT("Sin stock"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_boton5, 1, wxALL|wxEXPAND, 5 );

	m_boton6 = new wxButton( this, wxID_ANY, wxT("Ranking"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_boton6, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_boton7 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_boton7->SetMinSize( wxSize( -1,50 ) );

	bSizer4->Add( m_boton7, 1, wxALL|wxEXPAND, 5 );

	m_boton8 = new wxButton( this, wxID_ANY, wxT("Modificar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_boton8, 1, wxALL|wxEXPAND, 5 );

	m_boton9 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_boton9, 1, wxALL|wxEXPAND, 5 );

	m_boton10 = new wxButton( this, wxID_ANY, wxT("Modificar Stock"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_boton10, 1, wxALL|wxEXPAND, 5 );

	m_boton11 = new wxButton( this, wxID_ANY, wxT("Modificar Vendidos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_boton11, 1, wxALL|wxEXPAND, 5 );


	bSizer1->Add( bSizer4, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	grillaPrincipal = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaPrincipal->CreateGrid( 0, 9 );
	grillaPrincipal->EnableEditing( false );
	grillaPrincipal->EnableGridLines( true );
	grillaPrincipal->EnableDragGridSize( false );
	grillaPrincipal->SetMargins( 0, 0 );

	// Columns
	grillaPrincipal->SetColSize( 0, 180 );
	grillaPrincipal->SetColSize( 1, 180 );
	grillaPrincipal->SetColSize( 2, 290 );
	grillaPrincipal->SetColSize( 3, 100 );
	grillaPrincipal->SetColSize( 4, 150 );
	grillaPrincipal->SetColSize( 5, 150 );
	grillaPrincipal->SetColSize( 6, 150 );
	grillaPrincipal->SetColSize( 7, 75 );
	grillaPrincipal->SetColSize( 8, 75 );
	grillaPrincipal->EnableDragColMove( false );
	grillaPrincipal->EnableDragColSize( true );
	grillaPrincipal->SetColLabelSize( 30 );
	grillaPrincipal->SetColLabelValue( 0, wxT("Marca/Tipo") );
	grillaPrincipal->SetColLabelValue( 1, wxT("Modelo") );
	grillaPrincipal->SetColLabelValue( 2, wxT("Descripción") );
	grillaPrincipal->SetColLabelValue( 3, wxT("Color") );
	grillaPrincipal->SetColLabelValue( 4, wxT("Costo") );
	grillaPrincipal->SetColLabelValue( 5, wxT("Precio minorista") );
	grillaPrincipal->SetColLabelValue( 6, wxT("Precio mayorista") );
	grillaPrincipal->SetColLabelValue( 7, wxT("Stock") );
	grillaPrincipal->SetColLabelValue( 8, wxT("Vendido") );
	grillaPrincipal->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaPrincipal->EnableDragRowSize( true );
	grillaPrincipal->SetRowLabelSize( 0 );
	grillaPrincipal->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaPrincipal->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_CENTER );
	bSizer5->Add( grillaPrincipal, 1, wxEXPAND|wxALL, 5 );


	bSizer1->Add( bSizer5, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( VentanaPrincipal::cambiaTamanio ) );
	m_boton2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickCelulares ), NULL, this );
	m_boton3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickAccesorios ), NULL, this );
	m_boton4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickRepuestos ), NULL, this );
	m_boton5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickSinStock ), NULL, this );
	m_boton6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickRanking ), NULL, this );
	m_boton7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickAgregar ), NULL, this );
	m_boton8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificar ), NULL, this );
	m_boton9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickEliminar ), NULL, this );
	m_boton10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificarStock ), NULL, this );
	m_boton11->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificarVendidos ), NULL, this );
	grillaPrincipal->Connect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPrincipal::clickDobleGrilla ), NULL, this );
	grillaPrincipal->Connect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPrincipal::clickLabelGrilla ), NULL, this );
}

VentanaPrincipal::~VentanaPrincipal()
{
	// Disconnect Events
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( VentanaPrincipal::cambiaTamanio ) );
	m_boton2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickCelulares ), NULL, this );
	m_boton3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickAccesorios ), NULL, this );
	m_boton4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickRepuestos ), NULL, this );
	m_boton5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickSinStock ), NULL, this );
	m_boton6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickRanking ), NULL, this );
	m_boton7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickAgregar ), NULL, this );
	m_boton8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificar ), NULL, this );
	m_boton9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickEliminar ), NULL, this );
	m_boton10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificarStock ), NULL, this );
	m_boton11->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( VentanaPrincipal::clickModificarVendidos ), NULL, this );
	grillaPrincipal->Disconnect( wxEVT_GRID_CELL_LEFT_DCLICK, wxGridEventHandler( VentanaPrincipal::clickDobleGrilla ), NULL, this );
	grillaPrincipal->Disconnect( wxEVT_GRID_LABEL_LEFT_CLICK, wxGridEventHandler( VentanaPrincipal::clickLabelGrilla ), NULL, this );

}

DialogAgregarCel::DialogAgregarCel( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("Marca"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer7->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroMarca = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroMarca->SetMinSize( wxSize( 400,-1 ) );

	bSizer7->Add( cuadroMarca, 1, wxALL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Modelo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer8->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroModelo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroModelo->SetMinSize( wxSize( 400,-1 ) );

	bSizer8->Add( cuadroModelo, 1, wxALL, 5 );


	bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer9->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroDescripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroDescripcion->SetMinSize( wxSize( 400,-1 ) );

	bSizer9->Add( cuadroDescripcion, 1, wxALL, 5 );


	bSizer6->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer10->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroColor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroColor->SetMinSize( wxSize( 400,-1 ) );

	bSizer10->Add( cuadroColor, 1, wxALL, 5 );


	bSizer6->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Costo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer11->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroCosto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroCosto->SetMinSize( wxSize( 400,-1 ) );

	bSizer11->Add( cuadroCosto, 1, wxALL, 5 );


	bSizer6->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Precio minorista"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroPrecioMinorista = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroPrecioMinorista->SetMinSize( wxSize( 400,-1 ) );

	bSizer12->Add( cuadroPrecioMinorista, 1, wxALL, 5 );


	bSizer6->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Precio mayorista"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer13->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroPrecioMayorista = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroPrecioMayorista->SetMinSize( wxSize( 400,-1 ) );

	bSizer13->Add( cuadroPrecioMayorista, 1, wxALL, 5 );


	bSizer6->Add( bSizer13, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Cantidad disponible"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer14->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroCantidadDisponible = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroCantidadDisponible->SetMinSize( wxSize( 400,-1 ) );

	bSizer14->Add( cuadroCantidadDisponible, 1, wxALL, 5 );


	bSizer6->Add( bSizer14, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxHORIZONTAL );

	botonCerrar = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( botonCerrar, 0, wxALL, 5 );

	botonAgregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( botonAgregar, 0, wxALL, 5 );


	bSizer6->Add( bSizer15, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer6 );
	this->Layout();
	bSizer6->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	botonCerrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCel::clickBotonCerrar ), NULL, this );
	botonAgregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCel::clickBotonAgregar ), NULL, this );
}

DialogAgregarCel::~DialogAgregarCel()
{
	// Disconnect Events
	botonCerrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCel::clickBotonCerrar ), NULL, this );
	botonAgregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarCel::clickBotonAgregar ), NULL, this );

}

DialogAgregarAccRep::DialogAgregarAccRep( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Tipo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer17->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroTipo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroTipo->SetMinSize( wxSize( 400,-1 ) );

	bSizer17->Add( cuadroTipo, 1, wxALL, 5 );


	bSizer16->Add( bSizer17, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("Modelo / Marca"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer18->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroModelo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroModelo->SetMinSize( wxSize( 400,-1 ) );

	bSizer18->Add( cuadroModelo, 1, wxALL, 5 );


	bSizer16->Add( bSizer18, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer19->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroDescripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroDescripcion->SetMinSize( wxSize( 400,-1 ) );

	bSizer19->Add( cuadroDescripcion, 1, wxALL, 5 );


	bSizer16->Add( bSizer19, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer20->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroColor = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroColor->SetMinSize( wxSize( 400,-1 ) );

	bSizer20->Add( cuadroColor, 1, wxALL, 5 );


	bSizer16->Add( bSizer20, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("Costo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer21->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroCosto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroCosto->SetMinSize( wxSize( 400,-1 ) );

	bSizer21->Add( cuadroCosto, 1, wxALL, 5 );


	bSizer16->Add( bSizer21, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Precio minorista"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	bSizer22->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroPrecioMinorista = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroPrecioMinorista->SetMinSize( wxSize( 400,-1 ) );

	bSizer22->Add( cuadroPrecioMinorista, 1, wxALL, 5 );


	bSizer16->Add( bSizer22, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Precio mayorista"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	bSizer23->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroPrecioMayorista = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroPrecioMayorista->SetMinSize( wxSize( 400,-1 ) );

	bSizer23->Add( cuadroPrecioMayorista, 1, wxALL, 5 );


	bSizer16->Add( bSizer23, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("Cantidad disponible"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer24->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	cuadroCantidadDisponible = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	cuadroCantidadDisponible->SetMinSize( wxSize( 400,-1 ) );

	bSizer24->Add( cuadroCantidadDisponible, 1, wxALL, 5 );


	bSizer16->Add( bSizer24, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );

	botonCerrar = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( botonCerrar, 0, wxALL, 5 );

	botonAgregar = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( botonAgregar, 0, wxALL, 5 );


	bSizer16->Add( bSizer25, 1, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer16 );
	this->Layout();
	bSizer16->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	botonCerrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAccRep::clickBotonCerrar ), NULL, this );
	botonAgregar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAccRep::clickBotonAgregar ), NULL, this );
}

DialogAgregarAccRep::~DialogAgregarAccRep()
{
	// Disconnect Events
	botonCerrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAccRep::clickBotonCerrar ), NULL, this );
	botonAgregar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogAgregarAccRep::clickBotonAgregar ), NULL, this );

}

DialogSinStock::DialogSinStock( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,600 ), wxDefaultSize );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxHORIZONTAL );

	bSizer28->SetMinSize( wxSize( -1,300 ) );
	grillaSinStock = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaSinStock->CreateGrid( 0, 8 );
	grillaSinStock->EnableEditing( false );
	grillaSinStock->EnableGridLines( true );
	grillaSinStock->EnableDragGridSize( false );
	grillaSinStock->SetMargins( 0, 0 );

	// Columns
	grillaSinStock->SetColSize( 0, 150 );
	grillaSinStock->SetColSize( 1, 150 );
	grillaSinStock->SetColSize( 2, 250 );
	grillaSinStock->SetColSize( 3, 80 );
	grillaSinStock->SetColSize( 4, 150 );
	grillaSinStock->SetColSize( 5, 150 );
	grillaSinStock->SetColSize( 6, 150 );
	grillaSinStock->SetColSize( 7, 80 );
	grillaSinStock->EnableDragColMove( false );
	grillaSinStock->EnableDragColSize( true );
	grillaSinStock->SetColLabelSize( 30 );
	grillaSinStock->SetColLabelValue( 0, wxT("Marca/Tipo") );
	grillaSinStock->SetColLabelValue( 1, wxT("Modelo") );
	grillaSinStock->SetColLabelValue( 2, wxT("Descripción") );
	grillaSinStock->SetColLabelValue( 3, wxT("Color") );
	grillaSinStock->SetColLabelValue( 4, wxT("Costo") );
	grillaSinStock->SetColLabelValue( 5, wxT("Precio minorista") );
	grillaSinStock->SetColLabelValue( 6, wxT("Precio mayorista") );
	grillaSinStock->SetColLabelValue( 7, wxT("Vendidos") );
	grillaSinStock->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaSinStock->EnableDragRowSize( true );
	grillaSinStock->SetRowLabelSize( 0 );
	grillaSinStock->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaSinStock->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer28->Add( grillaSinStock, 0, wxALL, 5 );


	bSizer26->Add( bSizer28, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxHORIZONTAL );

	m_button16 = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer29->Add( m_button16, 0, wxALL, 5 );


	bSizer26->Add( bSizer29, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer26 );
	this->Layout();
	bSizer26->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button16->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSinStock::clickCerrar ), NULL, this );
}

DialogSinStock::~DialogSinStock()
{
	// Disconnect Events
	m_button16->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogSinStock::clickCerrar ), NULL, this );

}

DialogRanking::DialogRanking( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,600 ), wxDefaultSize );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer30;
	bSizer30 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("Ranking de celulares"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer30->Add( m_staticText17, 0, wxALL, 10 );


	bSizer29->Add( bSizer30, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );

	grillaRankingCelular = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaRankingCelular->CreateGrid( 0, 8 );
	grillaRankingCelular->EnableEditing( false );
	grillaRankingCelular->EnableGridLines( true );
	grillaRankingCelular->EnableDragGridSize( false );
	grillaRankingCelular->SetMargins( 0, 0 );

	// Columns
	grillaRankingCelular->SetColSize( 0, 150 );
	grillaRankingCelular->SetColSize( 1, 150 );
	grillaRankingCelular->SetColSize( 2, 250 );
	grillaRankingCelular->SetColSize( 3, 80 );
	grillaRankingCelular->SetColSize( 4, 150 );
	grillaRankingCelular->SetColSize( 5, 150 );
	grillaRankingCelular->SetColSize( 6, 150 );
	grillaRankingCelular->SetColSize( 7, 80 );
	grillaRankingCelular->EnableDragColMove( false );
	grillaRankingCelular->EnableDragColSize( true );
	grillaRankingCelular->SetColLabelSize( 30 );
	grillaRankingCelular->SetColLabelValue( 0, wxT("Marca") );
	grillaRankingCelular->SetColLabelValue( 1, wxT("Modelo") );
	grillaRankingCelular->SetColLabelValue( 2, wxT("Descripción") );
	grillaRankingCelular->SetColLabelValue( 3, wxT("Color") );
	grillaRankingCelular->SetColLabelValue( 4, wxT("Costo") );
	grillaRankingCelular->SetColLabelValue( 5, wxT("Precio minorista") );
	grillaRankingCelular->SetColLabelValue( 6, wxT("Precio mayorista") );
	grillaRankingCelular->SetColLabelValue( 7, wxT("Vendidos") );
	grillaRankingCelular->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaRankingCelular->EnableDragRowSize( true );
	grillaRankingCelular->SetRowLabelSize( 0 );
	grillaRankingCelular->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaRankingCelular->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	grillaRankingCelular->SetMinSize( wxSize( -1,100 ) );

	bSizer31->Add( grillaRankingCelular, 0, wxALL|wxEXPAND, 5 );


	bSizer29->Add( bSizer31, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("Ranking de accesorios"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	bSizer32->Add( m_staticText18, 0, wxALL, 10 );


	bSizer29->Add( bSizer32, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	grillaRankingAccesorios = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaRankingAccesorios->CreateGrid( 0, 8 );
	grillaRankingAccesorios->EnableEditing( false );
	grillaRankingAccesorios->EnableGridLines( true );
	grillaRankingAccesorios->EnableDragGridSize( false );
	grillaRankingAccesorios->SetMargins( 0, 0 );

	// Columns
	grillaRankingAccesorios->SetColSize( 0, 150 );
	grillaRankingAccesorios->SetColSize( 1, 150 );
	grillaRankingAccesorios->SetColSize( 2, 250 );
	grillaRankingAccesorios->SetColSize( 3, 80 );
	grillaRankingAccesorios->SetColSize( 4, 150 );
	grillaRankingAccesorios->SetColSize( 5, 150 );
	grillaRankingAccesorios->SetColSize( 6, 150 );
	grillaRankingAccesorios->SetColSize( 7, 80 );
	grillaRankingAccesorios->EnableDragColMove( false );
	grillaRankingAccesorios->EnableDragColSize( true );
	grillaRankingAccesorios->SetColLabelSize( 30 );
	grillaRankingAccesorios->SetColLabelValue( 0, wxT("Tipo") );
	grillaRankingAccesorios->SetColLabelValue( 1, wxT("Modelo") );
	grillaRankingAccesorios->SetColLabelValue( 2, wxT("Descripción") );
	grillaRankingAccesorios->SetColLabelValue( 3, wxT("Color") );
	grillaRankingAccesorios->SetColLabelValue( 4, wxT("Costo") );
	grillaRankingAccesorios->SetColLabelValue( 5, wxT("Precio minorista") );
	grillaRankingAccesorios->SetColLabelValue( 6, wxT("Precio mayorista") );
	grillaRankingAccesorios->SetColLabelValue( 7, wxT("Vendidos") );
	grillaRankingAccesorios->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaRankingAccesorios->EnableDragRowSize( true );
	grillaRankingAccesorios->SetRowLabelSize( 0 );
	grillaRankingAccesorios->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaRankingAccesorios->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	grillaRankingAccesorios->SetMinSize( wxSize( -1,100 ) );

	bSizer33->Add( grillaRankingAccesorios, 0, wxALL|wxEXPAND, 5 );


	bSizer29->Add( bSizer33, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Ranking de repuestos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer34->Add( m_staticText19, 0, wxALL, 10 );


	bSizer29->Add( bSizer34, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );

	grillaRankingRepuestos = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	grillaRankingRepuestos->CreateGrid( 0, 8 );
	grillaRankingRepuestos->EnableEditing( false );
	grillaRankingRepuestos->EnableGridLines( true );
	grillaRankingRepuestos->EnableDragGridSize( false );
	grillaRankingRepuestos->SetMargins( 0, 0 );

	// Columns
	grillaRankingRepuestos->SetColSize( 0, 150 );
	grillaRankingRepuestos->SetColSize( 1, 150 );
	grillaRankingRepuestos->SetColSize( 2, 250 );
	grillaRankingRepuestos->SetColSize( 3, 80 );
	grillaRankingRepuestos->SetColSize( 4, 150 );
	grillaRankingRepuestos->SetColSize( 5, 150 );
	grillaRankingRepuestos->SetColSize( 6, 150 );
	grillaRankingRepuestos->SetColSize( 7, 80 );
	grillaRankingRepuestos->EnableDragColMove( false );
	grillaRankingRepuestos->EnableDragColSize( true );
	grillaRankingRepuestos->SetColLabelSize( 30 );
	grillaRankingRepuestos->SetColLabelValue( 0, wxT("Tipo") );
	grillaRankingRepuestos->SetColLabelValue( 1, wxT("Modelo") );
	grillaRankingRepuestos->SetColLabelValue( 2, wxT("Descripción") );
	grillaRankingRepuestos->SetColLabelValue( 3, wxT("Color") );
	grillaRankingRepuestos->SetColLabelValue( 4, wxT("Costo") );
	grillaRankingRepuestos->SetColLabelValue( 5, wxT("Precio minorista") );
	grillaRankingRepuestos->SetColLabelValue( 6, wxT("Precio mayorista") );
	grillaRankingRepuestos->SetColLabelValue( 7, wxT("Vendidos") );
	grillaRankingRepuestos->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	grillaRankingRepuestos->EnableDragRowSize( true );
	grillaRankingRepuestos->SetRowLabelSize( 0 );
	grillaRankingRepuestos->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	grillaRankingRepuestos->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	grillaRankingRepuestos->SetMinSize( wxSize( -1,100 ) );

	bSizer35->Add( grillaRankingRepuestos, 0, wxALL|wxEXPAND, 5 );


	bSizer29->Add( bSizer35, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );

	botonCerrar = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( botonCerrar, 0, wxALL, 5 );


	bSizer29->Add( bSizer36, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer29 );
	this->Layout();
	bSizer29->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	botonCerrar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogRanking::clickCerrar ), NULL, this );
}

DialogRanking::~DialogRanking()
{
	// Disconnect Events
	botonCerrar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogRanking::clickCerrar ), NULL, this );

}

DialogManejoStockVenta::DialogManejoStockVenta( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 200,250 ), wxDefaultSize );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer38;
	bSizer38 = new wxBoxSizer( wxHORIZONTAL );

	staticMarca1 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticMarca1->Wrap( -1 );
	bSizer38->Add( staticMarca1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 10 );

	staticMarca2 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticMarca2->Wrap( -1 );
	bSizer38->Add( staticMarca2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer38, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxHORIZONTAL );

	staticModelo1 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticModelo1->Wrap( -1 );
	bSizer39->Add( staticModelo1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	staticModelo2 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticModelo2->Wrap( -1 );
	bSizer39->Add( staticModelo2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer39, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	staticColor1 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticColor1->Wrap( -1 );
	bSizer40->Add( staticColor1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	staticColor2 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	staticColor2->Wrap( -1 );
	bSizer40->Add( staticColor2, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer40, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("Stock:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer41->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 10 );

	m_spinCtrl1 = new wxSpinCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 1000, 0 );
	bSizer41->Add( m_spinCtrl1, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer37->Add( bSizer41, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	m_button18 = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer42->Add( m_button18, 0, wxALL, 5 );

	m_button19 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer42->Add( m_button19, 0, wxALL, 5 );


	bSizer37->Add( bSizer42, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer37 );
	this->Layout();
	bSizer37->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button18->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogManejoStockVenta::clickCerrar ), NULL, this );
	m_button19->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogManejoStockVenta::clickAceptar ), NULL, this );
}

DialogManejoStockVenta::~DialogManejoStockVenta()
{
	// Disconnect Events
	m_button18->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogManejoStockVenta::clickCerrar ), NULL, this );
	m_button19->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DialogManejoStockVenta::clickAceptar ), NULL, this );

}

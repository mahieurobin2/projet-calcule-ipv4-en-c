/***************************************************************
 * Name:      masqueipv4App.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2019-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#include "masqueipv4App.h"

//(*AppHeaders
#include "masqueipv4Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(masqueipv4App);

bool masqueipv4App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	masqueipv4Frame* Frame = new masqueipv4Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}

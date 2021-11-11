/***************************************************************
 * Name:      masqueipv4Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2019-12-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef MASQUEIPV4MAIN_H
#define MASQUEIPV4MAIN_H

//(*Headers(masqueipv4Frame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class masqueipv4Frame: public wxFrame
{
    public:

        masqueipv4Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~masqueipv4Frame();

    private:

        //(*Handlers(masqueipv4Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnClose(wxCloseEvent& event);
        void OnTextCtrl1Text(wxCommandEvent& event);
        void OnRadioButton1Select(wxCommandEvent& event);
        void OnTextCtrl5Text(wxCommandEvent& event);
        void OnTextCtrl4Text(wxCommandEvent& event);
        void OnToggleButton1Toggle(wxCommandEvent& event);
        void OnTextCtrl2Text(wxCommandEvent& event);
        void OnToggleButton2Toggle(wxCommandEvent& event);
        void OnRadioButton2Select(wxCommandEvent& event);
        void OnTextCtrl7Text(wxCommandEvent& event);
        void OnTextCtrl8Text(wxCommandEvent& event);
        void OnTextCtrl10Text(wxCommandEvent& event);
        void OnTextCtrl9Text(wxCommandEvent& event);
        void OnTextCtrl11Text(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton1Click1(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(masqueipv4Frame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_TEXTCTRL5;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL6;
        static const long ID_TEXTCTRL7;
        static const long ID_TEXTCTRL8;
        static const long ID_TEXTCTRL9;
        static const long ID_TEXTCTRL10;
        static const long ID_TEXTCTRL11;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(masqueipv4Frame)
        wxStaticText* StaticText9;
        wxTextCtrl* TextCtrl4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxStaticText* StaticText6;
        wxTextCtrl* TextCtrl6;
        wxStaticText* StaticText8;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxButton* Button2;
        wxButton* Button3;
        wxStaticText* StaticText5;
        wxStaticText* StaticText7;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl8;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl7;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* TextCtrl9;
        wxTextCtrl* TextCtrl5;
        wxStaticText* StaticText4;
        wxTextCtrl* TextCtrl3;
        wxTextCtrl* TextCtrl10;
        wxTextCtrl* TextCtrl11;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // MASQUEIPV4MAIN_H

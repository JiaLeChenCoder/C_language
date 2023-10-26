; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CAmazonsDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Amazons.h"

ClassCount=3
Class1=CAmazonsApp
Class2=CAmazonsDlg
Class3=CAboutDlg

ResourceCount=5
Resource1=IDD_AMAZONS_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_ABOUTBOX
Resource4=IDR_SETTINGMENU
Resource5=IDR_HELPMENU

[CLS:CAmazonsApp]
Type=0
HeaderFile=Amazons.h
ImplementationFile=Amazons.cpp
Filter=N

[CLS:CAmazonsDlg]
Type=0
HeaderFile=AmazonsDlg.h
ImplementationFile=AmazonsDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=CAmazonsDlg

[CLS:CAboutDlg]
Type=0
HeaderFile=AmazonsDlg.h
ImplementationFile=AmazonsDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_AMAZONS_DIALOG]
Type=1
Class=CAmazonsDlg
ControlCount=0

[MNU:IDR_SETTINGMENU]
Type=1
Class=?
Command1=IDM_START
Command2=IDM_RESET
Command3=IDM_EXIT
Command4=IDM_COMFIRST
Command5=IDM_HUMFIRST
Command6=IDM_HELP
CommandCount=6

[MNU:IDR_HELPMENU]
Type=1
Class=?
Command1=IDM_START
Command2=IDM_HELP
CommandCount=2


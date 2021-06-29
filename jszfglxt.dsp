# Microsoft Developer Studio Project File - Name="jszfglxt" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=jszfglxt - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "jszfglxt.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "jszfglxt.mak" CFG="jszfglxt - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "jszfglxt - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "jszfglxt - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "jszfglxt - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "jszfglxt - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "jszfglxt - Win32 Release"
# Name "jszfglxt - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\Dl.cpp
# End Source File
# Begin Source File

SOURCE=.\Flist.cpp
# End Source File
# Begin Source File

SOURCE=.\Jsmd.cpp
# End Source File
# Begin Source File

SOURCE=.\jszfglxt.cpp
# End Source File
# Begin Source File

SOURCE=.\jszfglxt.rc
# End Source File
# Begin Source File

SOURCE=.\jszfglxtDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Jtcyxx.cpp
# End Source File
# Begin Source File

SOURCE=.\Member.cpp
# End Source File
# Begin Source File

SOURCE=.\Nlist.cpp
# End Source File
# Begin Source File

SOURCE=.\Sqmd.cpp
# End Source File
# Begin Source File

SOURCE=.\Sqxx.cpp
# End Source File
# Begin Source File

SOURCE=.\Sqzf.cpp
# End Source File
# Begin Source File

SOURCE=.\standard.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\Sx.cpp
# End Source File
# Begin Source File

SOURCE=.\Xfyxx.cpp
# End Source File
# Begin Source File

SOURCE=.\Xgjl.cpp
# End Source File
# Begin Source File

SOURCE=.\Xgxx.cpp
# End Source File
# Begin Source File

SOURCE=.\Zfbz.cpp
# End Source File
# Begin Source File

SOURCE=.\Zjfy.cpp
# End Source File
# Begin Source File

SOURCE=.\Zjjl.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\Dl.h
# End Source File
# Begin Source File

SOURCE=.\Flist.h
# End Source File
# Begin Source File

SOURCE=.\Jsmd.h
# End Source File
# Begin Source File

SOURCE=.\jszfglxt.h
# End Source File
# Begin Source File

SOURCE=.\jszfglxtDlg.h
# End Source File
# Begin Source File

SOURCE=.\Jtcyxx.h
# End Source File
# Begin Source File

SOURCE=.\Member.h
# End Source File
# Begin Source File

SOURCE=.\Nlist.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\Sqmd.h
# End Source File
# Begin Source File

SOURCE=.\Sqxx.h
# End Source File
# Begin Source File

SOURCE=.\Sqzf.h
# End Source File
# Begin Source File

SOURCE=.\standard.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\Sx.h
# End Source File
# Begin Source File

SOURCE=.\Xfyxx.h
# End Source File
# Begin Source File

SOURCE=.\Xgjl.h
# End Source File
# Begin Source File

SOURCE=.\Xgxx.h
# End Source File
# Begin Source File

SOURCE=.\Zfbz.h
# End Source File
# Begin Source File

SOURCE=.\Zjfy.h
# End Source File
# Begin Source File

SOURCE=.\Zjjl.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\jszfglxt.ico
# End Source File
# Begin Source File

SOURCE=.\res\jszfglxt.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project

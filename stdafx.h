// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include <afx.h>
#include <afxwin.h>         // MFC �ٽ� �� ǥ�� ���� ����Դϴ�.

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>


// TODO: reference additional headers your program requires here

extern bool b_happy;
extern bool b_sad;
extern bool b_surprise;
extern bool b_angry;
extern bool b_fear;
extern bool b_disgust;

extern FILE* happyfp;
extern FILE* neutralfp;
extern FILE* R_happyfp;
extern FILE* R_neutralfp;
extern FILE* L_happyfp;
extern FILE* L_neutralfp;
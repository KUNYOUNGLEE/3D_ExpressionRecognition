// stdafx.cpp : source file that includes just the standard includes
// 3D_ExpressionRecognition.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

bool b_happy = false;
bool b_sad = false;
bool b_surprise = false;
bool b_angry = false;
bool b_fear = false;
bool b_disgust = false;

extern FILE *happyfp = NULL;
extern FILE *neutralfp = NULL;
extern FILE *R_happyfp = NULL;
extern FILE *R_neutralfp = NULL;
extern FILE *L_happyfp = NULL;
extern FILE *L_neutralfp = NULL;
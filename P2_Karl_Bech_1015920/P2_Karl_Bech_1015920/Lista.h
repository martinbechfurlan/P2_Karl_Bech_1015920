#pragma once
#include "Nodo.h"
using namespace System;

ref class Lista
{
	Nodo^ Head;
public:
	int Length;
	String^ Pop();
	void Push(String^ infoBhia);
	bool IsEmpty();
	bool IsEmptyWhile();
	int Top();
	void PushTabla(int Pos_F_C);
	int PopTabla();
};


#include "Lista.h"
#include "Nodo.h"
using namespace System;

String^ Lista::Pop() {
	if (IsEmpty())
		return "XX";
	Length--;
	Nodo^ ToDelete = Head;
	Nodo^ Retorno = gcnew Nodo();
	Retorno->infoCompleta = Head->infoCompleta;
	String^ ValR = Retorno->infoCompleta;
	Head = Head->Next;
	delete ToDelete;
	return ValR;
}

bool Lista::IsEmpty() {
	if (Head == nullptr)
		return true;
	else
		return false;
}

bool Lista::IsEmptyWhile() {
	if (Head == nullptr)
		return false;
	else
		return true;
}


int Lista::Top() {
	if (IsEmpty())
		return 0;
	Nodo^ Retorno = gcnew Nodo();
	Retorno->PosicionUsada = Head->PosicionUsada;
	int ValR = Retorno->PosicionUsada;
	return ValR;
}

//Prueba 
void Lista::Push(String^ infoBhia) {
	Nodo^ New = gcnew Nodo();
	New->infoCompleta = infoBhia;
	New->Next = Head;
	Head = New;
	Length++;
}


void Lista::PushTabla(int Pos_F_C) {
	Nodo^ New = gcnew Nodo();
	New->PosicionUsada = Pos_F_C;
	New->Next = Head;
	Head = New;
	Length++;
}

int Lista::PopTabla() {
	if (IsEmpty())
		return 0;
	Length--;
	Nodo^ ToDelete = Head;
	Nodo^ Retorno = gcnew Nodo();
	Retorno->PosicionUsada = Head->PosicionUsada;
	int ValR = Retorno->PosicionUsada;
	Head = Head->Next;
	delete ToDelete;
	return ValR;
}



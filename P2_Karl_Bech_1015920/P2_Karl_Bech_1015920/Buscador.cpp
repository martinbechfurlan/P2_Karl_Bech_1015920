#include "Buscador.h"
#include "Nodo.h"
#include "Lista.h"

String^ Buscador::Binario(Lista^ lis, Lista^ lis2, int l, int B) {
	int len = lis->Length;
	int* nums2 = new int[len];
	array<String^>^ Infos = gcnew array<String^>(len);

	for (int i = 0; i < len; i++)
	{
		nums2[i] = lis->PopTabla();
		Infos[i] = lis2->Pop();
	}
	String^ InfoBuscada = "";
	for (int i = 0; i < len; i++) {
		if (nums2[i] == B) {
			InfoBuscada = Infos[i];
			return InfoBuscada;
		}
	}
	for (int i = 0; i < len; i++)
	{
		lis->PushTabla(nums2[i]);
		lis2->Push(Infos[i]);
	}

	return "XX";
}
#include "Ordenar.h"

Lista^ Ordenar::Bubble(Lista^ lis, Lista^ lisInfo) {
	int len = lis->Length;
	int* nums = new int[len];
	array<String^>^ Infos = gcnew array<String^>(len);

	for (int i = 0; i < len; i++)
	{
		nums[i] = lis->PopTabla();
		Infos[i] = lisInfo->Pop();
	}
	String^ aux2 = "";
	for (int pasada = 0; pasada < len - 1; pasada++) {
		for (int j = 0; j < len - pasada - 1; j++)

			if (nums[j] > nums[j + 1]) {
				int aux = nums[j];
				aux2 = Infos[j];
				nums[j] = nums[j + 1];
				Infos[j] = Infos[j + 1];
				nums[j + 1] = aux;
				Infos[j + 1] = aux2;
			}
	}

	for (int i = 0; i < len; i++)
	{
		lisInfo->Push(Infos[i]);
		lis->PushTabla(nums[i]);
	}
	return lis;
}
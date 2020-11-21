#include "NumMin.h"
#include "Lista.h"
#include "Nodo.h"

int NumMin::Min(Lista^ lis) {
	int len = lis->Length;
	int* nums = new int[len];
	int l = 0;

	for (int i = 0; i < len; i++)
	{
		nums[i] = lis->PopTabla();
	}

	for (int j = 0; j < len; j++) {
		if (j == 0) {
			l = nums[j];
		}
		else {
			if (l > nums[j]) {
				l = nums[j];
			}
		}
	}
	return l;
}
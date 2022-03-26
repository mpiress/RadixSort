#include "radix.h"

int main(){
	
	Vector v;
	
	Initialize(&v);
	Imprime(&v);
	printf("\n");
	RadixSort(&v);

	return 0;
}

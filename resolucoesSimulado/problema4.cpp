#include <stdio.h>
	int main(){

		long int numero, dobro, quadrado;
		scanf("%ld", &numero);
		dobro = numero*2;
		quadrado = numero*numero;
		printf("%ld\n%ld\n", dobro, quadrado);

		return 0;
	}
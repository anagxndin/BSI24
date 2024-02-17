#include <stdio.h>
	int main(){

		float valorBel, valorFigurinha, troco;
		int quantidade;
		scanf("%f %f", &valorBel, &valorFigurinha);
		quantidade = valorBel/valorFigurinha;
		troco = valorBel - (quantidade * valorFigurinha);
		printf("%d %.2f\n", quantidade, troco);

		return 0;

	}
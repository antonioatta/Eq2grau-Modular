#include <stdio.h>
#include <math.h>
#include "eq2grau.h"

int main() {

	EQUACOES vetEq[10];
	int i;
	int numEq = 3;

	vetEq[0].a=5; vetEq[0].b=6; vetEq[0].c=2;
	vetEq[1].a=4; vetEq[1].b=10; vetEq[1].c=6;
	vetEq[2].a=3; vetEq[2].b=8; vetEq[2].c=3;

	for (i=0; i<numEq; i++) {
		vetEq[i].raizesReais = calcula_raizes(vetEq[i].a, vetEq[i].b, vetEq[i].c,
                                              &(vetEq[i].x1), &(vetEq[i].x2));
	}

	for (i=0; i<numEq; i++) {
		printf("Para os coeficientes a=%d, b=%d e c=%d as raizes sao ", vetEq[i].a, vetEq[i].b, vetEq[i].c);
		if (vetEq[i].raizesReais) printf("%6.2f e %6.2f\n", vetEq[i].x1, vetEq[i].x2);
		else printf("imaginarias.\n");
	}
	return 0;
}

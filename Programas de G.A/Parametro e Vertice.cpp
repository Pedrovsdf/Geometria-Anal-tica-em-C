#include <stdio.h>
#include <math.h>

int main (){
	int Igualdade=0;
	float Inc=0, P=0;
	
	printf("A incognita que nao esta ao quadrado esta antes ou depois da igualdade? Digite 1 para antes ou 2 para depois: ");
	scanf("%d", &Igualdade);
	printf("Digite o valor da incognita que nao esta ao quadrado: ");
	scanf("%f", &Inc);
	
	if (Igualdade == 1){
		P = (Inc * (-1))/2;
	}
	if (Igualdade == 2){
		P = Inc/2;
	}
	
	printf("O valor de P, o parametro, eh: %.2f\n", P);
	printf("O valor do Vertice eh: %.2f\n", P/2);
	
	return 0;
}

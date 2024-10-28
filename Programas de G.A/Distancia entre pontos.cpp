#include <stdio.h>
#include <math.h>

int main (){
	int i=0;
	float x[2], y[2], z[2], CX=0, CY=0, CZ=0, CT=0;
	
	for(i = 0; i < 2; i++){
		printf("\nDigite as coordenadas do Ponto %d:\nX = ", i+1);
		scanf("%f", &x[i]);
		printf("Y = ");
		scanf("%f", &y[i]);
		printf("Z = ");
		scanf("%f", &z[i]);
	}
	
	float Soma_De_Coordenadas (float C1, float C2);
	
	CX = Soma_De_Coordenadas (x[0], x[1]);
	CY = Soma_De_Coordenadas (y[0], y[1]);
	CZ = Soma_De_Coordenadas (z[0], z[1]);
	
	CT = CX + CY + CZ;
	CT = sqrt(CT);
	
	printf("\nA distancia entre os pontos 1 e 2 eh: %f", CT);
	
	return 0;
}

float Soma_De_Coordenadas (float C1, float C2){
	float C = pow((C2 - C1), 2);

	return C;
}

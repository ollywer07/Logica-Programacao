#include<stdio.h>

int main () {
	
	float nota1, nota2, nota3, nota4;
	float ma;
	
	
	printf ("nota 1: \n ");
	scanf("%f", &nota1);
	printf ("nota 2: \n ");
	scanf("%f", &nota2);
	printf ("nota 3: \n ");
	scanf("%f", &nota3);
	printf ("nota 4: \n ");
	scanf("%f", &nota4);
	
	ma = ((nota1*2) + (nota2*2) + (nota3*3) + (nota4*3))/10;
	
	printf (" \n MEDIA: %f \n", ma);
	
	if (ma >= 9) {
		printf (" Conceito A - APROVADO");	
	}
	else if (ma >= 7.5 && ma < 9.0){
		printf (" Conceito B - APROVADO");
	}
	else if (ma >= 6.0 && ma < 7.5) {
		printf (" Conceito C - APROVADO");
	}
	else if (ma < 6.0 && ma > 4.0) {
		printf(" Conceito D - FINAL");
	}
	else if (ma < 4.0) {
		printf (" Conceito E - REPROVADO");
	}
	
	printf ("\n Nota 1: %f \n Nota 2: %f \n Nota 3: %f \n Nota 4: %f \n", nota1, nota2, nota3, nota4);
	
}

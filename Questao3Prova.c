#include<stdio.h>

int main (){
	
	int numero, m, c, d, u, decimal;
	
	printf ("Digite um numero binario de 4 digitos: ");
	scanf ("%d", &numero);
	
	
	m = numero / 1000; // milhar
	c = (numero%1000)/100; // centena
	d = ((numero%1000)%100)/10; //dezena 
	u = (((numero%1000)%100)%10)/1; //unidade
	
	 if (m != 0 && m!= 1) {
	 printf ("\n ERRO - Valor digitado diferente de 0 ou 1"); }
	 else if(c != 0 && c != 1) {
	 printf ("\n ERRO - Valor digitado diferente de 0 ou 1"); }
	 else if(d != 0 && d !=1) {
	 printf ("\n ERRO - Valor digitado diferente de 0 ou 1"); }
	 else if(u != 1 && u != 0) {
	 printf ("\n ERRO - Valor digitado diferente de 0 ou 1");}
	else {

	decimal = m*8+c*4+d*2+u*1;
	
	printf ("O valor em decimal: %d \n", decimal);
}
}

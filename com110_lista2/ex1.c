#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	float x =0, y=0, h=0;
	printf("Entre com o valor do primeiro cateto: ");
	scanf("%f", &x);
	printf("Entre com o valor do segundo cateto: ");
	scanf("%f", &y);
	h = sqrt(pow(x,2.0)+pow(y,2.0));
	printf("A hipotenusa do triangulo e: ");
	printf("%.2f\n", h);
	return 0;
}


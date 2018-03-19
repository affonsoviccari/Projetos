#include <stdio.h>
#include <math.h>

int main ()
{
	int opcao;
	float n1, n2, n3, media;
	float a, b, c, x1, x2, delta;
	printf("Escolha uma das opções de cálculo:\n");
	printf("[1]Média entre dois números\n");
	printf("[2]Média entre três números\n");
	printf("[3]Fórmula de Bhaskara\n");
	printf("Informe a sua opção:");
	scanf("%i", &opcao);
		switch(opcao)
		{
		case 1:		//opção 1
				printf("Você escolheu a opção [1], então:\n");
				printf("Escreva a primeira nota:");
				scanf("%f", &n1);
				printf("\nEscreva a segunda nota:");
				scanf("%f", &n2);
				media = (n1 + n2)/2;
				printf("Sua média foi: %.02f\n", media);
				break; //fim do 1ºcaso
		case 2:		//opção 2
				printf("Você escolheu a opção [2], então:\n");
				printf("Escreva a primeira nota:");
				scanf("%f", &n1);
				printf("\nEscreva a segunda nota:");
				scanf("%f", &n2);
				printf("\nEscreva a terceira nota:");
				scanf("%f", &n3);
				media = (n1 + n2 + n3)/3;
				printf("Sua média foi: %.02f\n", media);
				break; //fim do 2ºcaso
		case 3:		//opção 3
				printf("Você escolheu a opção [3], então:\n");
				printf("Escreva o valor de a:");
				scanf("%f", &a);
				printf("Escreva o valor de b:");
				scanf("%f", &b);
				printf("Escreva o valor de c:");
				scanf("%f", &c);
				printf("A sua equação de segundo grau é: (%.0f)x^2+(%.0f)x+(%.0f)\n", a, b, c); 
			    delta = (b*b)+(-4*a*c);
			    x1=((-1*b)+(+1*sqrt(delta)))/(2*a);
			    x2=((-1*b)+(-1*sqrt(delta)))/(2*a);
			         	if(delta>0)
			    	    {
			            printf("Seu x' é %.2f e seu x'' é %.2f\n", x1, x2);
			    		}
			    	    else
			    	    printf("Sua equação possui uma única raiz ou não pertence aos reais\n");
			    	    break; //fim do 3ºcaso
		default: //caso opção não se encaixe em nenhum caso:	    	    
				printf("Código Inválido, tente novamente...\n");
		}
	return 0;
}

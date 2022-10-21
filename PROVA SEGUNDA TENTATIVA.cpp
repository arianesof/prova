#include<stdio.h>
#include<math.h>



int main(){
	//Variaveis da questao A
	char opcao;
	float B,C,A,seno;
	 
			
			
//prova
	char nome[40];
	int inicio,termino,situacao;
	
	
	printf("Algoritimo e programacao \t Joyce Siqueira \t Ariane Sofia Pereira de Sousa \t Analise e desenvolviment de Sistemas \n");	
	printf("https://github.com/arianesof/prova");
	printf("\n");
	printf("Selecione uma questão  A ou B:");
	scanf("%s",&opcao);
	
	switch(opcao){
		
		
		case 'A':
			
			printf("Digite o valor de B =");
			scanf("%f",&B);
			
			printf("Digite o valor de C =");
			scanf("%f",&C);
			
			A = sqrt(pow(B,2) + pow(C,2));
			
			seno = B/A	;
		
			printf(" A : %.3f\n seno : %.3f",A,seno);
			
		break;
		
		
		case 'B':{
			break;
		
		
		int  nome, ano;
		
		
		int verifica(int nome);
			printf("Digite seu nome: ");
			scanf("%s",&nome);
		int verifica(int ano);
		
		printf("Digite um ano: "); scanf("%d",&ano);
		
		if (verifica(ano) == 1)
		printf(" %d, o ano é bissexto!",ano);
		else
		printf("%d o não é ano bissexto!",ano);
		return 0;
		}
		int x;
		int verifica(int x);{
		if(x%400==0 || x%4==0 && x%100!=0)
		return 1;
		else
		return 0;
		}


			switch(situacao){
				
				case 1:
					printf("Obra Concluída\n");
				break;
				
				case 2:
					printf("Problemas no projeto\n");
				break;
				
				case 3:
					printf("Atraso nos repasses financeiros\n");
				break;	
				
				case 4:
					printf("Greve dos trabalhadores\n");
				break;
					
				case 5:
					printf("Falta de materiais\n");
				break;
				
				case 6:	
					printf("Falta de equipamentos\n");
				break;
			}
			printf("Tempo de execucao %d",termino - inicio);
					
		break;
	
	}
		
}


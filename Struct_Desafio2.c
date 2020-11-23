/* Algoritmo para sistema que fará a gestão de assentos disponíveis em um trem de passageiros.
O trem possui 10 vagões e cada vagão possui 45 assentos disponíveis.
Existem duas classes de passagem, a executiva do vagão 1 ao 5 e a econômica do vagão 6 ao 10.
Você deverá criar um programa que solicite o nome do comprador da passagem e quantas passagens ele irá comprar de uma determinada classe.
Após ele comprar, verificar se possui assentos disponíveis, se sim, ele poderá concretizar a compra e
mostrar na tela quais são os assentos liberados para ele, se não, emitir um aviso que o trem está cheio.
Para liberar os assentos, você deverá iniciar a venda de passagens pelo vagão 1 assento 1, após o vagão 1 estar preenchido, 
você deve começar a vender os assentos do vagão 2, e assim sucessivamente. 
Mas se a passagem for da classe econômica, você deverá iniciar do vagão 6. O comprador não
pode escolher o assento que ele deseja.

Calcular o valor das passagens por comprador. Passagem da classe executiva = R$ 58,00. 
Passagem da classe econômica = R$ 35,00. Perguntar qual a forma de pagamento. 
Se for dinheiro deve analisar se o valor pago precisa de troco, se sim, informar o valor do troco. 
Se for cartão (crédito ou débito) você deverá dar um desconto de R$ 1,75 por passagem
Criar um menu de opções onde poderá comprar a passagem, visualizar a quantidade total de passagens vendidas por classe,
visualizar a quantidade de assentos disponíveis por vagão.
Criar uma interface amigável, utilize todos os recursos aprendidos até hoje nas aulas.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


char nome[500];
int passagem, classe, vagaoEconomico = 225, passEconomica = 0, i, vagaoExecutivo = 225, passExecutiva = 0;
int vagao1 = 45, vagao2 = 45, vagao3 = 45, vagao4 = 45, vagao5 = 45, vagao6 = 45, vagao7 = 45, vagao8 = 45, vagao9 = 45, vagao10 = 45; 
int vagao11, vagao12, vagao13, vagao14, vagao15, vagao16, vagao17, vagao18, vagao19, vagao20;
int passExecutivo2 = 0, passExecutivo3 = 0, passExecutivo4 = 0, passExecutivo5 = 0, passExecutivo6 = 0;
int passEconomico2 = 0, passEconomico3 = 0, passEconomico4 = 0, passEconomico5 = 0, passEconomico6 = 0;

void Passagens() {

	getchar();
	printf("Nome comprador: ");
	scanf_s("%[^\n]s", &nome, 500);
	getchar();

	printf("Quantidade passagem: ");
	scanf_s("%i", &passagem);

	printf("Escolha a classe Executiva (1): ");
	scanf_s("%i", &classe);

	
	if (classe == 1) {
		vagaoExecutivo -= passagem;
		for (i = 0; i < passagem; i++) {

			passExecutiva++;
			if (passExecutiva > 225) {
				passExecutiva = 225;
				break;
			}


			if (passExecutiva <= 45) {
				passExecutivo2++;
				printf("\nVagao 1 da executiva assento %i", passExecutivo2);

			}
			if (passExecutiva > 45 && passExecutiva <= 90) {
				passExecutivo3++;
				printf("\nVagao 2 da executiva assento %i", passExecutivo3);

			}
			if (passExecutiva > 90 && passExecutiva <= 135) {
				passExecutivo4++;
				printf("\nVagao 3 da executiva assento %i", passExecutivo4);

			}
			if (passExecutiva > 135 && passExecutiva <= 180) {
				passExecutivo5++;
				printf("\nVagao 4 da executiva assento %i", passExecutivo5);


			}
			if (passExecutiva > 180 && passExecutiva <= 225) {
				passExecutivo6++;
				printf("\nVagao 5 da executiva assento %i", passExecutivo6);

			}
		}


			if (vagaoExecutivo < 0) {
				vagaoExecutivo = 0;
				if (vagaoExecutivo == 0) {

					vagaoEconomico += passExecutiva;
					vagaoEconomico -= passagem;
					

					for (i = 0; i < passagem-passExecutiva; i++) {

						passEconomica++;
						if (passEconomica > 225) {
							passEconomica = 225;
							break;
						}
					

						if (passEconomica <= 45) {
							passEconomico2++;
							printf("\n----Vagao 1 da Economica assento %i----", passEconomico2);

						}
						if (passEconomica > 45 && passEconomica <= 90) {
							passEconomico3++;
							printf("\n----Vagao 2 da Economica assento %i----", passEconomico3);

						}
						if (passEconomica > 90 && passEconomica <= 135) {
							passEconomico4++;
							printf("\n----Vagao 3 da Economica assento %i----", passEconomico4);

						}
						if (passEconomica > 135 && passEconomica <= 180) {
							passEconomico5++;
							printf("\n----Vagao 4 da Economica assento %i----", passEconomico5);

						}
						if (passEconomica > 180 && passEconomica <= 225) {
							passEconomico6++;
							printf("\n----Vagao 5 da Economica assento %i----", passEconomico6);

						}
					}
					if (vagaoEconomico < 0) {
						vagaoEconomico = 0;
						
					}


				}

			}
		
		vagao11 = vagao1 - passExecutivo2;
		vagao12 = vagao2 - passExecutivo3;
		vagao13 = vagao3 - passExecutivo4;
		vagao14 = vagao4 - passExecutivo5;
		vagao15 = vagao5 - passExecutivo6;
		vagao16 = vagao6 - passEconomico2;
		vagao17 = vagao7 - passEconomico3;
		vagao18 = vagao8 - passEconomico4;
		vagao19 = vagao9 - passEconomico5;
		vagao20 = vagao10 - passEconomico6;


		printf("\n\nVagas disponiveis classe Executiva = %i", vagaoExecutivo);
		printf("\n\n\nVagas disponiveis classe Economica = %i\n", vagaoEconomico);
		
		
	}

	
	system("pause");
}
	
void QuantidadePassagens() {

	printf("\nQuantidade passagens da executiva = %i", passExecutiva);
	printf("\nQuantidade passagens da economica = %i\n\n", passEconomica);
	system("pause");
}

void Vagao() {
	if (vagao11 < 0) {
		vagao11 = 0;
	}
	if (vagao12 < 0) {
		vagao12 = 0;
	}
	if (vagao13 < 0) {
		vagao13 = 0;
	}
	if (vagao14 < 0) {
		vagao14 = 0;
	}
	if (vagao15 < 0) {
		vagao15 = 0;
	}
	if (vagao16 < 0) {
		vagao16 = 0;
	}
	if (vagao17 < 0) {
		vagao17 = 0;
	}
	if (vagao18 < 0) {
		vagao18 = 0;
	}
	if (vagao19 < 0) {
		vagao19 = 0;
	}
	if (vagao20 < 0) {
		vagao20 = 0;
	}

	printf("\nVagao 1 (Executiva) assentos disponiveis = %i\n", vagao11);
	printf("\nVagao 2 (Executiva) assentos disponiveis = %i\n", vagao12);
	printf("\nVagao 3 (Executiva) assentos disponiveis = %i\n", vagao13);
	printf("\nVagao 4 (Executiva) assentos disponiveis = %i\n", vagao14);
	printf("\nVagao 5 (Executiva) assentos disponiveis = %i\n", vagao15);
	printf("\nVagao 6 (Economica) assentos disponiveis = %i\n", vagao16);
	printf("\nVagao 7 (Economica) assentos disponiveis = %i\n", vagao17);
	printf("\nVagao 8 (Economica) assentos disponiveis = %i\n", vagao18);
	printf("\nVagao 9 (Economica) assentos disponiveis = %i\n", vagao19);
	printf("\nVagao 10 (Economica) assentos disponiveis = %i\n\n\n", vagao20);
	system("pause");
}


int main() {
	
	int sw;
	do
	{

	
	printf("\nEscolha a opcao: (1) para comprar passagem (2) para ver quantidade passagens vendidas (3) para assentos: ");
	scanf_s("%i", &sw);

	
	switch (sw) {
	case 1:
		Passagens();
		system("cls");
		break;
		
	
	case 2:
		QuantidadePassagens();
			system("cls");
			break;
	case 3:
		Vagao();
		system("cls");
		break;

	}
	} while (sw!=4);
}


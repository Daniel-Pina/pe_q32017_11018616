#include <stdio.h>
#include <stdlib.h>

typedef struct Cargo {
	char * funcao;
	double salario;
} Cargo;


typedef struct Ficha {
	char * nome;
	int idade;
	double peso;
	char cor;
	Cargo posicao;
} Ficha;

int main()
{
	Ficha Bob;
	Bob.nome = malloc(6*sizeof(char));
	Bob.nome = "Hornby";
	Bob.idade = 19;
	Bob.peso = 60;
	Bob.cor = 'P';

	Ficha arquivo[2];
	arquivo[0] = Bob;

	Ficha Nic;
	Nic.nome = malloc(7*sizeof(char));
	Nic.nome = "Nicolas";
	Nic.idade = 19;
	Nic.peso = 80;
	Nic.cor = 'A';

	arquivo[1] = Nic;

	printf("\nFICHA 1\nNome: %s\nIdade: %d\nPeso: %.2lf\nCor favorita: %c\n", arquivo[0].nome, arquivo[0].idade, arquivo[0].peso, arquivo[0].cor);

	printf("\nFICHA 2\nNome: %s\nIdade: %d\nPeso: %.2lf\nCor favorita: %c\n\n", arquivo[1].nome, arquivo[1].idade, arquivo[1].peso, arquivo[1].cor);

	Nic.posicao.funcao = malloc(16*sizeof(char));
	Nic.posicao.funcao = "Pedreiro de Luxo";
	Nic.posicao.salario = 10000.25;

	arquivo[1] = Nic;

	printf("\n\n\t\tCONTRATADO\nNome: %s\nIdade: %d\nPeso: %.2lf\nCor favorita: %c\nNova Função: %s\nSalário: R$%.2lf\n\n", arquivo[1].nome, arquivo[1].idade, arquivo[1].peso, arquivo[1].cor, arquivo[1].posicao.funcao, arquivo[1].posicao.salario);

}

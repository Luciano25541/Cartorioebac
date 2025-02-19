#include <stdio.h> //biblioteca de comunicação com usuário
#include <stdlib.h> //blibioteca de alocação de espaço em memória
#include <locale.h> //blibioteca de alocação de texto por região
#include <string.h> //blibioteca responsável por cuidar das string

int registro() //função responsavel por cadastrar os usuário no sitema
{
	//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("digite o cpf a ser cadastrado: ");//coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salva o valor do arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");//coletando informação do usuário
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

	printf("digite o sobrenome a ser cadastrado: ");//coletando informação do usuário
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");//coletando informação do usuário
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consuta()
{
	setlocale(LC_ALL,"portuguese"); //definindo linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("digite o CPF a ser consutado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informções do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("pause");
	}

}

int main()
{
int opcao=0; //definindo variáveis
int x=1;

	for(x=1;x=1;)
	{
		system("cls");
	
	
	
	
	setlocale(LC_ALL,"portuguese"); //definindo linguagem
	
	printf("### cartório da EBAC ###\n\n"); // inicio do menu
 	printf("escolha a opção desejada do menu:\n\n");
 	printf("\t1-registrar nomes\n");
	 printf("\t2-consutar nomes\n");
 	printf("\t3-deletar nomes\n\n"); 
 	printf("\t4-sair do sistema\n\n");
 	printf("opção: "); //fim do menu
 
 scanf("%d", &opcao); //armazenando a escolha do usuário
 
	system("cls");//responsavel por limpar a tela
	
	switch(opcao) //inicio da seleção do menu
	{
		case 1:
		registro(); //chamada de funções
		break;
		
		case 2:	
		consuta();
		break;
		
		case 3:
		deletar();
		break;
		
		case 4:
		printf("obrigado por utilizar o sitema!\n");
		return 0;
		break;
		
	
		
		default:
			
		printf("essa opção não está disponivel!\n");
		system("pause");
		break;
	}
	
	

}
	
}

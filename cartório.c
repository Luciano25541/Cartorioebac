#include <stdio.h> //biblioteca de comunica��o com usu�rio
#include <stdlib.h> //blibioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //blibioteca de aloca��o de texto por regi�o
#include <string.h> //blibioteca respons�vel por cuidar das string

int registro() //fun��o responsavel por cadastrar os usu�rio no sitema
{
	//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o de vari�veis/string
	
	printf("digite o cpf a ser cadastrado: ");//coletando informa��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); //salva o valor do arquivo
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");//coletando informa��o do usu�rio
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

	printf("digite o sobrenome a ser cadastrado: ");//coletando informa��o do usu�rio
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o cargo a ser cadastrado: ");//coletando informa��o do usu�rio
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
		printf("n�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as inform��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
	
}

int deletar()
{
	char cpf[40];
	
	printf("digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}

}

int main()
{
int opcao=0; //definindo vari�veis
int x=1;

	for(x=1;x=1;)
	{
		system("cls");
	
	
	
	
	setlocale(LC_ALL,"portuguese"); //definindo linguagem
	
	printf("### cart�rio da EBAC ###\n\n"); // inicio do menu
 	printf("escolha a op��o desejada do menu:\n\n");
 	printf("\t1-registrar nomes\n");
	 printf("\t2-consutar nomes\n");
 	printf("\t3-deletar nomes\n\n"); 
 	printf("\t4-sair do sistema\n\n");
 	printf("op��o: "); //fim do menu
 
 scanf("%d", &opcao); //armazenando a escolha do usu�rio
 
	system("cls");//responsavel por limpar a tela
	
	switch(opcao) //inicio da sele��o do menu
	{
		case 1:
		registro(); //chamada de fun��es
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
			
		printf("essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
	}
	
	

}
	
}

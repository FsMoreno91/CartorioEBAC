#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca�oes de texto por regi�o
#include <string.h>

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //Resposavel por copiar os valores das string
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file, cpf); //salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
	system("pause");
	
	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
{
	printf("N�o foi possivel abrir o arquivo, n�o localizado!\n");
	
}
 
 	while(fgets(conteudo, 200,file) !=NULL)
 	{
 		printf("\n Essas s�o as informa�oes do usuario: ");
 		printf("%s", conteudo);
 		printf("\n\n");
 	 }
 	 
 	 system("pause");

}

int deletar()
{
	printf("Voc� escolheu deletar nomes!\n");
	system("pause");
}


	int main()
    {
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
    {
		system("cls");
	
		setlocale(LC_ALL, "Portuguese");
	
		printf("###Cart�rio da EBAC###\n\n");
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1- Registrar Nomes\n");
		printf("\t2- Consultar Nomes\n");
		printf("\t3- Deletar Nomes\n");
		printf("Op��o: "); //Fim do menu
	
		scanf("%d", &opcao); // Armazenamento a escolha do usuario
	
	
		system("cls"); //Limpar a tela
		
		
		switch(opcao)
		{
		
			case 1:
				registro();
				break;
				
			case 2:
				consulta();
				break;
			
			case 3:
				deletar();
				break;
				
				
			default:
			printf("Essa op��o n�o est� disponivel!\n");
			system("pause");
			break;
				
	}	
   	}
	}

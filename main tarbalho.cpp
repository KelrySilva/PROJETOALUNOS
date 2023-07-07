
#include <stdio.h>
#include <stdlib.h>


	void limparTela() {
    #ifdef _WIN32
        system("cls"); // Comando para limpar a tela no Windows
    #else
        system("clear"); // Comando para limpar a tela em sistemas baseados em Unix
    #endif
}

int main() {
    char nome[100];
    char dataNascimento[11];
    char rg[12];
    char cpf[12];
    int t;
    int i;
    int curso;

    printf("------------SISTEMA DE CADASTRO SENAI----------\n");
    printf("-------CEPT EMERSON FERNADES DOS SANTOS.-------\n");
    printf("\n");

    printf("Seja Bem-Vindo(a)\n");
    printf("\n");
    printf("Para realizar uma inscricao nos cursos sao necessarios: NOME COMPLETO, DATA DE NASCIMENTO, NUMERO DO RG E CPF.\n");
    printf("\n");

    printf("DIGITE O NOME COMPLETO: \n");
    scanf("%99[^\n]%*c", nome);

    printf("DIGITE A DATA DE NASCIMENTO: \n");
    scanf("%10s", dataNascimento);

    printf("DIGITE O NUMERO DO RG: \n");
    scanf("%11s", rg);

    printf("DIGITE O NUMERO DO CPF: \n");
    scanf("%11s", cpf);

    printf("\n");

    printf("DOCUMENTOS INSERIDOS:\n");
    printf("Nome: %s\n", nome);
    printf("Data de nascimento: %s\n", dataNascimento);
    printf("RG: %s\n", rg);
    printf("CPF: %s\n", cpf);

    printf("\n");
    printf("Digite qualquer tecla para continuar:\n");
    scanf("%d",&t);

    limparTela(); // Chama a função para limpar a tela

    printf("AQUI ESTAO OS CURSOS DO MES DE JULHO:\n");
    
    printf("CURSO: 1 Informatica Basica;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO/VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO  \n");
    printf("\n");
    printf("CURSO: 2 Informatica Basica;\nCARGA HORARIA: 80H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 3 Operador de Computador;\nCARGA HORARIA: 160H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 4 Tecnico em Adiministracao;\nCARGA HORARIA: 800H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 5 Capacitacao para mercado de trabalho;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 6 Atendimento ao Publico;\nCARGA HORARIA: 20H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 7 Tecnicas em Vendas;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 8 Assistente de Recursos Humano;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 9 Assistente Administrativo;\nCARGA HORARIA: 160H;\nTURNOS: MATUTINO/NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 10 Assistente em Contabilidade;\nCARGA HORARIA: 160H;\nTURNOS:VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 11 Rotinas Basicas de Administracao;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO/VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 12 Mecanico de Refrigeracao e Climatizacao Residencial;\nCARGA HORARIA: 180H;\nTURNOS: NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 13 Montador e Reparador de Computador;\nCARGA HORARIA: 160H;\nTURNOS: NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 14 Mecanico de Motores Ciclo Disel;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 15 Assentador de Revestimento ceramico;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 16 Eletricista Instalador Residencial;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");
    printf("CURSO: 17 Pedreiro  de Alvenaria;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");


    printf("Qual o numero do curso que voce deseja entrar:\n ");
    scanf("%d", &curso);
   
   if ( curso==1) {
   	printf("CURSO: 1 Informatica Basica;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO/VESPERTINO;\nMODALIDADE:PRESENCIAL;\nINVESTIMENTO: GRATUITO \n");
   	 printf("\n");
   }
   
   if ( curso==2) {
    printf("CURSO: 2 Informatica Basica;\nCARGA HORARIA: 80H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
   } 
    
    if ( curso==3) {
     printf("CURSO: 3 Operador de Computador;\nCARGA HORARIA: 160H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	} 
	
	if (curso==4) {
	printf("CURSO: 4 Tecnico em Adiministracao;\nCARGA HORARIA: 800H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==5) {
	printf("CURSO: 5 Capacitacao para mercado de trabalho;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==6) {
	 printf("CURSO: 6 Atendimento ao Publico;\nCARGA HORARIA: 20H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==7) {
	printf("CURSO: 7 Tecnicas em Vendas;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==8) {
	 printf("CURSO: 8 Assistente de Recursos Humano;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==9) {
	  printf("CURSO: 9 Assistente Administrativo;\nCARGA HORARIA: 160H;\nTURNOS: MATUTINO/NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==10) {
	 printf("CURSO: 10 Assistente em Contabilidade;\nCARGA HORARIA: 160H;\nTURNOS:VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==11) {
	printf("CURSO: 11 Rotinas Basicas de Administracao;\nCARGA HORARIA: 40H;\nTURNOS: MATUTINO/VESPERTINO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==12) {
	  printf("CURSO: 12 Mecanico de Refrigeracao e Climatizacao Residencial;\nCARGA HORARIA: 180H;\nTURNOS: NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==13) {
	printf("CURSO: 13 Montador e Reparador de Computador;\nCARGA HORARIA: 160H;\nTURNOS: NORTUNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==14) {
	 printf("CURSO: 14 Mecanico de Motores Ciclo Disel;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==15) {
	  printf("CURSO: 15 Assentador de Revestimento ceramico;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==16) {
	   printf("CURSO: 16 Eletricista Instalador Residencial;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	if (curso==17) {
	    printf("CURSO: 17 Pedreiro  de Alvenaria;\nCARGA HORARIA: 160H;\nTURNOS: VESPERTINO/NOTURNO;\nMODALIDADE: PRESENCIAL;\nINVESTIMENTO: GRATUITO\n");
    printf("\n");	
	}
	
	printf ("Para mais informacoes entre em contato com o Senai\nWhatsApp: (98) 992098484");
	
	return 0;
}

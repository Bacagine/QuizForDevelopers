/*******************************************************************************
 * Git Hub: https://github.com/Bacagine/QuizForDevelopers                      *
 *                                                                             *
 * Descrição                                                                   *
 *                                                                             *
 * main.c: arquivo principal da aplicação QuizForDevelopers contendo o menu    *
 * do jogo                                                                     *
 *                                                                             *
 * Versão: 0.1                                                                 *
 *                                                                             *
 * Desenvolvido por: Gustavo S. Bacagine	<gustavobacagine@gmail.com>        *
 * Data: 15/08/2019                                                            *
 *******************************************************************************/

#include <stdio.h>
#include <stdlib.h> // --> Biblioteca usada para o system("clear")
#include <string.h>
#include "niveis.h" // --> Biblioteca contendo o protótipo \
					       das funções com os niveis do jogo

// MENU DO JOGO
int main(){
  int op;
  do{
    system("clear"); //Limpa o terminal
    printf("\n\n\n\n\n");
    printf("\t\t\t\t**************************************************************************************\n");
    printf("\t\t\t\t*  ██████╗ ██╗   ██╗██╗███████╗                                                      *\n");
    printf("\t\t\t\t* ██╔═══██╗██║   ██║██║╚══███╔╝                                                      *\n");
    printf("\t\t\t\t* ██║   ██║██║   ██║██║  ███╔╝                                                       *\n");
    printf("\t\t\t\t* ██║▄▄ ██║██║   ██║██║ ███╔╝                                                        *\n");
    printf("\t\t\t\t* ╚██████╔╝╚██████╔╝██║███████╗                                                      *\n");
    printf("\t\t\t\t*  ╚══▀▀═╝  ╚═════╝ ╚═╝╚══════╝                                                      *\n");
    printf("\t\t\t\t*                    ███████╗ ██████╗ ██████╗                                        *\n");
    printf("\t\t\t\t*                    ██╔════╝██╔═══██╗██╔══██╗                                       *\n");
    printf("\t\t\t\t*                    █████╗  ██║   ██║██████╔╝                                       *\n");
    printf("\t\t\t\t*                    ██╔══╝  ██║   ██║██╔══██╗                                       *\n");
    printf("\t\t\t\t*                    ██║     ╚██████╔╝██║  ██║                                       *\n");
    printf("\t\t\t\t*                    ╚═╝      ╚═════╝ ╚═╝  ╚═╝                                       *\n");
    printf("\t\t\t\t* ██████╗ ███████╗██╗   ██╗███████╗██╗      ██████╗ ██████╗ ███████╗██████╗ ███████╗ *\n");
    printf("\t\t\t\t* ██╔══██╗██╔════╝██║   ██║██╔════╝██║     ██╔═══██╗██╔══██╗██╔════╝██╔══██╗██╔════╝ *\n");
    printf("\t\t\t\t* ██║  ██║█████╗  ██║   ██║█████╗  ██║     ██║   ██║██████╔╝█████╗  ██████╔╝███████╗ *\n");
    printf("\t\t\t\t* ██║  ██║██╔══╝  ╚██╗ ██╔╝██╔══╝  ██║     ██║   ██║██╔═══╝ ██╔══╝  ██╔══██╗╚════██║ *\n");
    printf("\t\t\t\t* ██████╔╝███████╗ ╚████╔╝ ███████╗███████╗╚██████╔╝██║     ███████╗██║  ██║███████║ *\n");
    printf("\t\t\t\t* ╚═════╝ ╚══════╝  ╚═══╝  ╚══════╝╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚═╝  ╚═╝╚══════╝ *\n");
    printf("\t\t\t\t*________________________ESCOLHA O NÍVEL EM QUE DESEJA JOGAR_________________________*\n");
    printf("\t\t\t\t*                              1-FÁCIL(10 perguntas)                                 *\n");
    printf("\t\t\t\t*                              2-MÉDIO(em andamento)(40 perguntas)                   *\n");
    printf("\t\t\t\t*                              3-DÍFICIL(em andamento)(50 perguntas)                 *\n");
    printf("\t\t\t\t*                              4-CRIADOR                                             *\n");
    printf("\t\t\t\t*                              5-SAIR                                                *\n");
    printf("\t\t\t\t**************************************************************************************\n");
    printf("\t\t\t\t"); // Para fazer fontes como essa do menu acesse o site:
    scanf("%d", &op);  // http://www.patorjk.com/software/taag/#p=display&f=Graffiti&t=

    switch (op){
      case 1:
      facil();
      break;
      case 2:
      medio();
      break;
      case 3:
      dificil();
      break;
      case 4:
      criador();
      break;
      default:
      system("exit");
    }

  }while(op != 5); //Quando a fase acaba o do while faz com que o jogo volte para o menu

  return 0;
}

// CRIADOR DO JOGO
void criador(){

    system("clear");
    printf("\t\t\t\t*********************************************************************************************\n");
    printf("\t\t\t\t*  ╦╔═╗╔═╗╔═╗  ╔═╗╦═╗╦╔═╗╔╦╗╔═╗  ╔═╗╔═╗╦═╗  ╔═╗╦ ╦╔═╗╔╦╗╔═╗╦  ╦╔═╗  ╔╗ ╔═╗╔═╗╔═╗╔═╗╦╔╗╔╔═╗  *\n");
    printf("\t\t\t\t*  ║║ ║║ ╦║ ║  ║  ╠╦╝║╠═╣ ║║║ ║  ╠═╝║ ║╠╦╝  ║ ╦║ ║╚═╗ ║ ╠═╣╚╗╔╝║ ║  ╠╩╗╠═╣║  ╠═╣║ ╦║║║║║╣   *\n");
    printf("\t\t\t\t* ╚╝╚═╝╚═╝╚═╝  ╚═╝╩╚═╩╩ ╩═╩╝╚═╝  ╩  ╚═╝╩╚═  ╚═╝╚═╝╚═╝ ╩ ╩ ╩ ╚╝ ╚═╝  ╚═╝╩ ╩╚═╝╩ ╩╚═╝╩╝╚╝╚═╝  *\n");
    printf("\t\t\t\t*________________________________DATA DE CRIAÇÃO: 15/08/2019________________________________*\n");
    printf("\t\t\t\t*********************************************************************************************\n");
    printf("\t\t\t\tTecle enter para voltar para o menu principal\n");
    getchar();
    getchar();

}

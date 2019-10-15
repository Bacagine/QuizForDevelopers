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

void dificil(){ // 

    char quest51[13];
    char resp51[] = "Ada Lovelace";
    system("clear");
    printf("51) Quem foi a primeira pessoa a criar a programação?\n");
    scanf(" %12[^\n]", quest51);
    while(strcasecmp(quest51, resp51)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %12[^\n]", quest51);
      }
      puts("Correto!");
      getchar();
      getchar();

    char quest52[17];
    char resp52[] = "Guido van Rossum";
    system("clear");
    printf("52) Quem é o criador da linguagem Python?\n");
    scanf(" %16[^\n]", quest52);
    while(strcasecmp(quest52, resp52)){
          puts("Não, está errado!");
          puts("Por favor tente novamente:");
          scanf(" %16[^\n]", quest52);
    }
    puts("Correto!");
    getchar();
    getchar();

    // char quest53[1];
    // char resp53[] = "";
    // system("clear");
    // printf("53) O que será impresso no seguinte programa?\n");
    // printf("void main() {\n");
    // printf("\tint a = 1;\n");
    // printf("\twhile (a <= 10) {\n");
    // printf("\t\tprintf (\"%d\", a);\n");
    // printf("\t\ta = a + 1;\n");
    // printf("\t}\n");
    // printf("}\n");
    // scanf(" %[^\n]", quest53);
    // while(strcasecmp(quest53, resp53)){
    //     puts("Não, está errado!");
    //     puts("Por favor tente novamente:");
    //     scanf(" %[^\n]", quest53);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();

    char quest54[7];
    char resp54[] = "Gentoo";
    system("clear");
    printf("54) Qual a distribuição LINUX mais díficil?\n");
    scanf(" %6[^\n]", quest54);
    while(strcasecmp(quest54, resp54)){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf(" %6[^\n]", quest54);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest55[18];
    char resp55[] = "Linus Is Not Unix";
    system("clear");
    printf("55) O que significa a sigla LINUX?\n");
    scanf(" %17[^\n]", quest55);
    while(strcasecmp(quest55, quest55)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %17[^\n]", quest55);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest56[16];
    char resp56[] = "GNU is Not Unix";
    system("clear");
    printf("56) O que significa a sigla GNU?\n");
    scanf(" %15[^\n]", quest56);
    while(strcasecmp(quest56, resp56)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %15[^\n]", quest56);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest57[14];
    char resp57[] = "Torvalds Unix";
    system("clear");
    printf("57) O que siginifica a sigla TUX?\n");
    scanf(" %13[^\n]", quest57);
    while(strcasecmp(quest57, resp57)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %13[^\n]", quest57);
    }
    puts("Correto!");
    getchar();
    getchar();

  // char quest58[];
  // char resp58[] = "";
  // system("clear");
  // printf("58) ?\n");
  // scanf(" %[^\n]", quest58);
  // while(strcasecmp(quest58, resp58)){
  //     puts("Não, está errado!");
  //     puts("Por favor tente novamente:");
  //     scanf(" %[^\n]", quest58);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();
  //
  // char quest59[];
  // char resp59[] = "";
  // system("clear");
  // printf("59) ?\n");
  // scanf(" %[^\n]", quest59);
  // while(strcasecmp(quest59, resp59)){
  //     puts("Não, está errado!");
  //     puts("Por favor tente novamente:");
  //     scanf(" %[^\n]", quest59);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();
  //
  // char quest60[];
  // char resp60[] = "";
  // system("clear");
  // printf("60) ?\n");
  // scanf(" %[^\n]", quest60);
  // while(strcasecmp(quest60, resp60)){
  //     puts("Não, está errado!");
  //     puts("Por favor tente novamente:");
  //     scanf(" %[^\n]", quest60);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();
  //
  // char quest61[];
  // char resp61[] = "";
  // system("clear");
  // printf("61) ?\n");
  // scanf(" %[^\n]", quest61);
  // while(strcasecmp(quest61, resp61)){
  //     puts("Não, está errado!");
  //     puts("Por favor tente novamente:");
  //     scanf(" %[^\n]", quest61);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();
  //
  // char quest62[];
  // char resp62[] = "";
  // system("clear");
  // printf("62) ?\n");
  // scanf(" %[^\n]", quest62);
  // while(strcasecmp(quest62, resp62)){
  //     puts("Não, está errado!");
  //     puts("Por favor tente novamente:");
  //     scanf(" %[^\n]", quest62);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest63;
  // char resp63 = "";
  // system("clear");
  // printf("63) ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest63);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest;
  // char resp = "";
  // system("clear");
  // printf(") ?");
  // printf("a)\n");
  // printf("b)\n");
  // printf("c)\n");
  // printf("d)\n");
  // printf("\n");
  // scanf(" %[^\n]", quest);
  // while(strcasecmp(quest, resp)){
  //   puts("Não, está errado!");
  //   puts("Por favor tente novamente:");
  //   scanf(" %10[^\n]", quest);
  // }
  // puts("Correto!");
  // getchar();
  // getchar();

  // char quest100[17];
  // char resp100[] = "Gustavo Bacagine";
  // system("clear");
  // printf("100) Qual é o nome do criador do jogo?\n");
  // scanf(" %16[^\n]", quest100);
  // while(strcasecmp(quest100, resp100)){
    //     puts("Não, está errado!");
    //     puts("Por favor tente novamente:");
    //     scanf(" %16[^\n]", quest100);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();

    system("clear");
    printf("\t\t\t\t                                          ..                            \n");
    printf("\t\t\t\t        OBRIGADO POR JOGAR            ,'.                           \n");
    printf("\t\t\t\t      ______MEU JOGO!________                                       \n");
    printf("\t\t\t\t                 \\                 ..                              \n");
    printf("\t\t\t\t                  \\      :kk:    :k0KKc                            \n");
    printf("\t\t\t\t                   \\    'K.:Xo  ;Mx..cW;                           \n");
    printf("\t\t\t\t                    \\   .0  ld:ccK;   N:                           \n");
    printf("\t\t\t\t                     \\   ckdkOO0KK0xo0k                            \n");
    printf("\t\t\t\t                          ldkkO0KKKK0kxk'                           \n");
    printf("\t\t\t\t                          ,odkOO0Okxdddd.  ,.                       \n");
    printf("\t\t\t\t                          'Oocloodddxk0Kk  .;.                      \n");
    printf("\t\t\t\t                          kKOkxddxk0XNWMM0                          \n");
    printf("\t\t\t\t                        .KMWNK00KXWWMMMMMMK                         \n");
    printf("\t\t\t\t                       ,WMMMMMWWMMMMMMMMMMWx                        \n");
    printf("\t\t\t\t                       XMMMMMMWWMMMMWWWWWNNN.                       \n");
    printf("\t\t\t\t                      'XNWMMMMWMMMMMWWWNXXKXK;                      \n");
    printf("\t\t\t\t                     :NMMMMMMMMMMMMMMMMMMMWWXNd                     \n");
    printf("\t\t\t\t                  . cMMMMMMMMMMMMMMMMMMMMMMMMWMo ,. .               \n");
    printf("\t\t\t\t                   ,MMMMMMMMWWMMMMMMMMMMMMMMMMMW.   .               \n");
    printf("\t\t\t\t                .  NMMMMMMMMWWMMMMMMMMMMMMMMMMMM:   .               \n");
    printf("\t\t\t\t                . lMMMMMMMMMWWMMMMMMMMMMMMMMMMMMo   .               \n");
    printf("\t\t\t\t               .. 0MMMMMMMMMWWMMMMMMMMMMMMMMMMMMl   .               \n");
    printf("\t\t\t\t              ....NMMMMMMMMMWWMMMMMMMMMMMMMMMMMM;  .   .            \n");
    printf("\t\t\t\t            ,xOOx;'dWMMMMMMMWWMMMMMMMMMMMMMMW0KK:      .'.          \n");
    printf("\t\t\t\t       ....cxOOOOOl. lXMMMMMWMMMMMMMMMMMMMMMXokOl       'kd         \n");
    printf("\t\t\t\t     ;xkkkkkOOOOOOOx.  'xWMMMMMMMMMMMMMMMMNX0okOx,.  .,oOOk'        \n");
    printf("\t\t\t\t     ckOOOOOOOOOOOOOk,   .xMMMMMMMMMMMMMMMNKOokOkxdddxkOOOOk'       \n");
    printf("\t\t\t\t     ;xOOOOOOOOOOOOOOOc    WMMMMMMMMMMMMMMWO:okOOOOkOOOOOOOOOx:.    \n");
    printf("\t\t\t\t     ,xOOOOOOOOOOOOOOOOdcxXMMMMMMMMMMMMMM0; .okOOOOOOOOOOOOOOOkd'   \n");
    printf("\t\t\t\t     okOOOOOOOOOOOOOOOOOddKWMMMMMMMMMW0l.   ,okOOOOOOOOOOkkxxdl,    \n");
    printf("\t\t\t\t    :oxkkOOOOOOOOOOOOOOOxl, .;:llc:,.       ;okOOOOOOkkdol:,.       \n");
    printf("\t\t\t\t     ';:loddxxxkkOOOOOOkxl;                 ,ldxkkxxdoc;.           \n");
    printf("\t\t\t\t          ...',:clodxxdoc;.                 .,:clllc:,.             \n");
    printf("\t\t\t\t                  ..',,'.                     ......   \n");
    getchar();
    // getchar();
}

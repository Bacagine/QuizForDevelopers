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

void facil(){

    char quest1;
    char resp1 = 'c';
    system("clear");
    printf("1) O que veio antes da línguagem C?\n");
    printf("Foi a línguagem:\n");
    printf("a) assembly\n");
    printf("b) C#\n");
    printf("c) Línguagem B\n");
    printf("d) C++\n");
    printf("\n");
    getchar();
    scanf("%c", &quest1);
    while(quest1 != resp1){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf("%c", &quest1);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest2;
    char resp2 = 'a';
    system("clear");
    printf("2) Quem são os criadores da línguagem C?\n");
    printf("a) Ken Thompson e Dennis Ritchie\n");
    printf("b) Linus Torvalds e Bill Gates\n");
    printf("c) Dexter e Jimmy Neutron\n");
    printf("d) Albert Einstein e Isaac Newton\n");
    printf("\n");
    scanf("%c", &quest2);
    while((quest2 != resp2)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest2);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest3;
    char resp3 = 'c';
    system("clear");
    printf("3) Quem são os autores do livro ""C/C++ Programmer's bible""?\n");
    printf("a) Isaac Azimov e Mark Zuckemberg\n");
    printf("b) Ken Thompson e Dennis Ritchie\n");
    printf("c) Kris Jamsa e Lars Klander\n");
    printf("d) Richard Stallman e Linus Torvalds\n");
    printf("\n");
    scanf("%c", &quest3);
    while((quest3 != resp3)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest3);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest4[6];
    char resp4[] = "Café";
    system("clear");
    printf("4) Qual é o combustivel dos programadores?\n");
    scanf(" %5[^\n]", quest4);
    while(strcasecmp(quest4, resp4)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %5[^\n]", quest4);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest5[15];
    char resp5[] = "Linus Torvalds";
    system("clear");
    printf("5) Quem é o criador do Kernel Linux?\n");
    scanf(" %15[^\n]", quest5);
    while(strcasecmp(quest5, resp5)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %15[^\n]", quest5);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest6[11];
    char resp6[] = "Bill Gates";
    system("clear");
    printf("6) Quem fundou a Microsoft?\n");
    scanf(" %10[^\n]", quest6);
    while(strcasecmp(quest6, resp6)){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf(" %10[^\n]", quest6);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest7;
    char resp7 = 'b';
    system("clear");
    printf("7) Qual dessas IDEs é usada para programar em C/C++?\n");
    printf("a) SASM\n");
    printf("b) Code::Blocks IDE\n");
    printf("c) NASM\n");
    printf("d) MCU 8051 IDE\n");
    printf("\n");
    scanf("%c", &quest7);
    while(quest7 != resp7){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf("%c", &quest7);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest8;
    char resp8 = 'd';
    system("clear");
    printf("8) HTML é:\n");
    printf("a) Uma línguagem de programação\n");
    printf("b) Uma nave espacial\n");
    printf("c) Uma IDE\n");
    printf("d) Uma línguagem de marcação\n");
    printf("\n");
    scanf(" %c", &quest8);
    while(quest8 != resp8){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf(" %c", &quest8);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest9;
    char resp9 = 'b';
    system("clear");
    printf("9) Qual a línguagem usada para criar sites?\n");
    printf("a) CSS\n");
    printf("b) HTML\n");
    printf("c) Java\n");
    printf("d) C\n");
    printf("\n");
    scanf("%c", &quest9);
    while(quest9 != resp9){
      puts("Não, está errado!");
      puts("Por favor tente novamente:");
      scanf("%c", &quest9);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest;
    system("clear");
    printf("10) Qual é o melhor Sistema Operacional do mundo?\n");
    printf("a) Windows\n");
    printf("b) LINUX\n");
    printf("c) MacOS\n");
    printf("d) Android\n");
    printf("\n");
    getchar();
    getchar();
    scanf("%c", &quest);
    system("clear");
    puts("NÃO EXISTE O MELHOR SISTEMA OPERACIONAL DO MUNDO.");
    getchar();
    system("clear");
    puts("O MELHOR SISTEMA OPERACIONAL DO MUNDO É AQUELE QUE ESTA NO SEU CORAÇÃO.");
    getchar();
    system("clear");
    puts("Porém...");
    getchar();
    system("clear");
    puts("LINUX não pega os vírus de Windows, a maioria dos servidores é LINUX");
    puts("E...");
    getchar();
    system("clear");
    puts("O LINUX NÃO TE OBRIGA A ATUALIZAR TODA HORA!");
    getchar();

    char quest10;
    system("clear");
    printf("10) Qual é o melhor Sistema Operacional do mundo?\n");
    printf("a) LINUX\n");
    printf("b) GNU LINUX\n");
    printf("c) Kernel Linux\n");
    printf("d) Linus Is Not UniX\n");
    printf("\n");
    getchar();
    scanf("%c", &quest10);
    // if(quest10 = 'a') {
    //     system("clear");
    //     printf("\t\t\t\t                                          ..                            \n");
    //     printf("\t\t\t\t                                      ,'.                           \n");
    //     printf("\t\t\t\t                                                                    \n");
    //     printf("\t\t\t\t                                    ..                              \n");
    //     printf("\t\t\t\t                          :kk:    :k0KKc                            \n");
    //     printf("\t\t\t\t                         'K.:Xo  ;Mx..cW;                           \n");
    //     printf("\t\t\t\t                         .0  ld:ccK;   N:                           \n");
    //     printf("\t\t\t\t                          ckdkOO0KK0xo0k                            \n");
    //     printf("\t\t\t\t                          ldkkO0KKKK0kxk'                           \n");
    //     printf("\t\t\t\t                          ,odkOO0Okxdddd.  ,.                       \n");
    //     printf("\t\t\t\t                          'Oocloodddxk0Kk  .;.                      \n");
    //     printf("\t\t\t\t                          kKOkxddxk0XNWMM0                          \n");
    //     printf("\t\t\t\t                        .KMWNK00KXWWMMMMMMK                         \n");
    //     printf("\t\t\t\t                       ,WMMMMMWWMMMMMMMMMMWx                        \n");
    //     printf("\t\t\t\t                       XMMMMMMWWMMMMWWWWWNNN.                       \n");
    //     printf("\t\t\t\t                      'XNWMMMMWMMMMMWWWNXXKXK;                      \n");
    //     printf("\t\t\t\t                     :NMMMMMMMMMMMMMMMMMMMWWXNd                     \n");
    //     printf("\t\t\t\t                  . cMMMMMMMMMMMMMMMMMMMMMMMMWMo ,. .               \n");
    //     printf("\t\t\t\t                   ,MMMMMMMMWWMMMMMMMMMMMMMMMMMW.   .               \n");
    //     printf("\t\t\t\t                .  NMMMMMMMMWWMMMMMMMMMMMMMMMMMM:   .               \n");
    //     printf("\t\t\t\t                . lMMMMMMMMMWWMMMMMMMMMMMMMMMMMMo   .               \n");
    //     printf("\t\t\t\t               .. 0MMMMMMMMMWWMMMMMMMMMMMMMMMMMMl   .               \n");
    //     printf("\t\t\t\t              ....NMMMMMMMMMWWMMMMMMMMMMMMMMMMMM;  .   .            \n");
    //     printf("\t\t\t\t            ,xOOx;'dWMMMMMMMWWMMMMMMMMMMMMMMW0KK:      .'.          \n");
    //     printf("\t\t\t\t       ....cxOOOOOl. lXMMMMMWMMMMMMMMMMMMMMMXokOl       'kd         \n");
    //     printf("\t\t\t\t     ;xkkkkkOOOOOOOx.  'xWMMMMMMMMMMMMMMMMNX0okOx,.  .,oOOk'        \n");
    //     printf("\t\t\t\t     ckOOOOOOOOOOOOOk,   .xMMMMMMMMMMMMMMMNKOokOkxdddxkOOOOk'       \n");
    //     printf("\t\t\t\t     ;xOOOOOOOOOOOOOOOc    WMMMMMMMMMMMMMMWO:okOOOOkOOOOOOOOOx:.    \n");
    //     printf("\t\t\t\t     ,xOOOOOOOOOOOOOOOOdcxXMMMMMMMMMMMMMM0; .okOOOOOOOOOOOOOOOkd'   \n");
    //     printf("\t\t\t\t     okOOOOOOOOOOOOOOOOOddKWMMMMMMMMMW0l.   ,okOOOOOOOOOOkkxxdl,    \n");
    //     printf("\t\t\t\t    :oxkkOOOOOOOOOOOOOOOxl, .;:llc:,.       ;okOOOOOOkkdol:,.       \n");
    //     printf("\t\t\t\t     ';:loddxxxkkOOOOOOkxl;                 ,ldxkkxxdoc;.           \n");
    //     printf("\t\t\t\t          ...',:clodxxdoc;.                 .,:clllc:,.             \n");
    //     printf("\t\t\t\t                  ..',,'.                     ......   \n");
    //     puts("\t\t\t\t\t\t\tLINUX > Ruindows!");
    //     getchar();
    // }
    // else if(quest10 = 'b') {
    //     system("clear");
    //     printf("\t\t\t\t                                          ..                            \n");
    //     printf("\t\t\t\t                                      ,'.                           \n");
    //     printf("\t\t\t\t                                                                    \n");
    //     printf("\t\t\t\t                                    ..                              \n");
    //     printf("\t\t\t\t                          :kk:    :k0KKc                            \n");
    //     printf("\t\t\t\t                         'K.:Xo  ;Mx..cW;                           \n");
    //     printf("\t\t\t\t                         .0  ld:ccK;   N:                           \n");
    //     printf("\t\t\t\t                          ckdkOO0KK0xo0k                            \n");
    //     printf("\t\t\t\t                          ldkkO0KKKK0kxk'                           \n");
    //     printf("\t\t\t\t                          ,odkOO0Okxdddd.  ,.                       \n");
    //     printf("\t\t\t\t                          'Oocloodddxk0Kk  .;.                      \n");
    //     printf("\t\t\t\t                          kKOkxddxk0XNWMM0                          \n");
    //     printf("\t\t\t\t                        .KMWNK00KXWWMMMMMMK                         \n");
    //     printf("\t\t\t\t                       ,WMMMMMWWMMMMMMMMMMWx                        \n");
    //     printf("\t\t\t\t                       XMMMMMMWWMMMMWWWWWNNN.                       \n");
    //     printf("\t\t\t\t                      'XNWMMMMWMMMMMWWWNXXKXK;                      \n");
    //     printf("\t\t\t\t                     :NMMMMMMMMMMMMMMMMMMMWWXNd                     \n");
    //     printf("\t\t\t\t                  . cMMMMMMMMMMMMMMMMMMMMMMMMWMo ,. .               \n");
    //     printf("\t\t\t\t                   ,MMMMMMMMWWMMMMMMMMMMMMMMMMMW.   .               \n");
    //     printf("\t\t\t\t                .  NMMMMMMMMWWMMMMMMMMMMMMMMMMMM:   .               \n");
    //     printf("\t\t\t\t                . lMMMMMMMMMWWMMMMMMMMMMMMMMMMMMo   .               \n");
    //     printf("\t\t\t\t               .. 0MMMMMMMMMWWMMMMMMMMMMMMMMMMMMl   .               \n");
    //     printf("\t\t\t\t              ....NMMMMMMMMMWWMMMMMMMMMMMMMMMMMM;  .   .            \n");
    //     printf("\t\t\t\t            ,xOOx;'dWMMMMMMMWWMMMMMMMMMMMMMMW0KK:      .'.          \n");
    //     printf("\t\t\t\t       ....cxOOOOOl. lXMMMMMWMMMMMMMMMMMMMMMXokOl       'kd         \n");
    //     printf("\t\t\t\t     ;xkkkkkOOOOOOOx.  'xWMMMMMMMMMMMMMMMMNX0okOx,.  .,oOOk'        \n");
    //     printf("\t\t\t\t     ckOOOOOOOOOOOOOk,   .xMMMMMMMMMMMMMMMNKOokOkxdddxkOOOOk'       \n");
    //     printf("\t\t\t\t     ;xOOOOOOOOOOOOOOOc    WMMMMMMMMMMMMMMWO:okOOOOkOOOOOOOOOx:.    \n");
    //     printf("\t\t\t\t     ,xOOOOOOOOOOOOOOOOdcxXMMMMMMMMMMMMMM0; .okOOOOOOOOOOOOOOOkd'   \n");
    //     printf("\t\t\t\t     okOOOOOOOOOOOOOOOOOddKWMMMMMMMMMW0l.   ,okOOOOOOOOOOkkxxdl,    \n");
    //     printf("\t\t\t\t    :oxkkOOOOOOOOOOOOOOOxl, .;:llc:,.       ;okOOOOOOkkdol:,.       \n");
    //     printf("\t\t\t\t     ';:loddxxxkkOOOOOOkxl;                 ,ldxkkxxdoc;.           \n");
    //     printf("\t\t\t\t          ...',:clodxxdoc;.                 .,:clllc:,.             \n");
    //     printf("\t\t\t\t                  ..',,'.                     ......   \n");
    //     puts("\t\t\t\t\t\t\tLINUX > Ruindows!");
    //     getchar();
    // }
    // else if(quest10 = 'c') {
    //         system("clear");
    //         printf("\t\t\t\t                                          ..                            \n");
    //         printf("\t\t\t\t                                      ,'.                           \n");
    //         printf("\t\t\t\t                                                                    \n");
    //         printf("\t\t\t\t                                    ..                              \n");
    //         printf("\t\t\t\t                          :kk:    :k0KKc                            \n");
    //         printf("\t\t\t\t                         'K.:Xo  ;Mx..cW;                           \n");
    //         printf("\t\t\t\t                         .0  ld:ccK;   N:                           \n");
    //         printf("\t\t\t\t                          ckdkOO0KK0xo0k                            \n");
    //         printf("\t\t\t\t                          ldkkO0KKKK0kxk'                           \n");
    //         printf("\t\t\t\t                          ,odkOO0Okxdddd.  ,.                       \n");
    //         printf("\t\t\t\t                          'Oocloodddxk0Kk  .;.                      \n");
    //         printf("\t\t\t\t                          kKOkxddxk0XNWMM0                          \n");
    //         printf("\t\t\t\t                        .KMWNK00KXWWMMMMMMK                         \n");
    //         printf("\t\t\t\t                       ,WMMMMMWWMMMMMMMMMMWx                        \n");
    //         printf("\t\t\t\t                       XMMMMMMWWMMMMWWWWWNNN.                       \n");
    //         printf("\t\t\t\t                      'XNWMMMMWMMMMMWWWNXXKXK;                      \n");
    //         printf("\t\t\t\t                     :NMMMMMMMMMMMMMMMMMMMWWXNd                     \n");
    //         printf("\t\t\t\t                  . cMMMMMMMMMMMMMMMMMMMMMMMMWMo ,. .               \n");
    //         printf("\t\t\t\t                   ,MMMMMMMMWWMMMMMMMMMMMMMMMMMW.   .               \n");
    //         printf("\t\t\t\t                .  NMMMMMMMMWWMMMMMMMMMMMMMMMMMM:   .               \n");
    //         printf("\t\t\t\t                . lMMMMMMMMMWWMMMMMMMMMMMMMMMMMMo   .               \n");
    //         printf("\t\t\t\t               .. 0MMMMMMMMMWWMMMMMMMMMMMMMMMMMMl   .               \n");
    //         printf("\t\t\t\t              ....NMMMMMMMMMWWMMMMMMMMMMMMMMMMMM;  .   .            \n");
    //         printf("\t\t\t\t            ,xOOx;'dWMMMMMMMWWMMMMMMMMMMMMMMW0KK:      .'.          \n");
    //         printf("\t\t\t\t       ....cxOOOOOl. lXMMMMMWMMMMMMMMMMMMMMMXokOl       'kd         \n");
    //         printf("\t\t\t\t     ;xkkkkkOOOOOOOx.  'xWMMMMMMMMMMMMMMMMNX0okOx,.  .,oOOk'        \n");
    //         printf("\t\t\t\t     ckOOOOOOOOOOOOOk,   .xMMMMMMMMMMMMMMMNKOokOkxdddxkOOOOk'       \n");
    //         printf("\t\t\t\t     ;xOOOOOOOOOOOOOOOc    WMMMMMMMMMMMMMMWO:okOOOOkOOOOOOOOOx:.    \n");
    //         printf("\t\t\t\t     ,xOOOOOOOOOOOOOOOOdcxXMMMMMMMMMMMMMM0; .okOOOOOOOOOOOOOOOkd'   \n");
    //         printf("\t\t\t\t     okOOOOOOOOOOOOOOOOOddKWMMMMMMMMMW0l.   ,okOOOOOOOOOOkkxxdl,    \n");
    //         printf("\t\t\t\t    :oxkkOOOOOOOOOOOOOOOxl, .;:llc:,.       ;okOOOOOOkkdol:,.       \n");
    //         printf("\t\t\t\t     ';:loddxxxkkOOOOOOkxl;                 ,ldxkkxxdoc;.           \n");
    //         printf("\t\t\t\t          ...',:clodxxdoc;.                 .,:clllc:,.             \n");
    //         printf("\t\t\t\t                  ..',,'.                     ......   \n");
    //         puts("\t\t\t\t\t\t\tLINUX > Ruindows!");
    //         getchar();
    //     }
    //     else if(quest10 = 'd') {
    //         system("clear");
    //         printf("\t\t\t\t                                          ..                            \n");
    //         printf("\t\t\t\t                                      ,'.                           \n");
    //         printf("\t\t\t\t                                                                    \n");
    //         printf("\t\t\t\t                                    ..                              \n");
    //         printf("\t\t\t\t                          :kk:    :k0KKc                            \n");
    //         printf("\t\t\t\t                         'K.:Xo  ;Mx..cW;                           \n");
    //         printf("\t\t\t\t                         .0  ld:ccK;   N:                           \n");
    //         printf("\t\t\t\t                          ckdkOO0KK0xo0k                            \n");
    //         printf("\t\t\t\t                          ldkkO0KKKK0kxk'                           \n");
    //         printf("\t\t\t\t                          ,odkOO0Okxdddd.  ,.                       \n");
    //         printf("\t\t\t\t                          'Oocloodddxk0Kk  .;.                      \n");
    //         printf("\t\t\t\t                          kKOkxddxk0XNWMM0                          \n");
    //         printf("\t\t\t\t                        .KMWNK00KXWWMMMMMMK                         \n");
    //         printf("\t\t\t\t                       ,WMMMMMWWMMMMMMMMMMWx                        \n");
    //         printf("\t\t\t\t                       XMMMMMMWWMMMMWWWWWNNN.                       \n");
    //         printf("\t\t\t\t                      'XNWMMMMWMMMMMWWWNXXKXK;                      \n");
    //         printf("\t\t\t\t                     :NMMMMMMMMMMMMMMMMMMMWWXNd                     \n");
    //         printf("\t\t\t\t                  . cMMMMMMMMMMMMMMMMMMMMMMMMWMo ,. .               \n");
    //         printf("\t\t\t\t                   ,MMMMMMMMWWMMMMMMMMMMMMMMMMMW.   .               \n");
    //         printf("\t\t\t\t                .  NMMMMMMMMWWMMMMMMMMMMMMMMMMMM:   .               \n");
    //         printf("\t\t\t\t                . lMMMMMMMMMWWMMMMMMMMMMMMMMMMMMo   .               \n");
    //         printf("\t\t\t\t               .. 0MMMMMMMMMWWMMMMMMMMMMMMMMMMMMl   .               \n");
    //         printf("\t\t\t\t              ....NMMMMMMMMMWWMMMMMMMMMMMMMMMMMM;  .   .            \n");
    //         printf("\t\t\t\t            ,xOOx;'dWMMMMMMMWWMMMMMMMMMMMMMMW0KK:      .'.          \n");
    //         printf("\t\t\t\t       ....cxOOOOOl. lXMMMMMWMMMMMMMMMMMMMMMXokOl       'kd         \n");
    //         printf("\t\t\t\t     ;xkkkkkOOOOOOOx.  'xWMMMMMMMMMMMMMMMMNX0okOx,.  .,oOOk'        \n");
    //         printf("\t\t\t\t     ckOOOOOOOOOOOOOk,   .xMMMMMMMMMMMMMMMNKOokOkxdddxkOOOOk'       \n");
    //         printf("\t\t\t\t     ;xOOOOOOOOOOOOOOOc    WMMMMMMMMMMMMMMWO:okOOOOkOOOOOOOOOx:.    \n");
    //         printf("\t\t\t\t     ,xOOOOOOOOOOOOOOOOdcxXMMMMMMMMMMMMMM0; .okOOOOOOOOOOOOOOOkd'   \n");
    //         printf("\t\t\t\t     okOOOOOOOOOOOOOOOOOddKWMMMMMMMMMW0l.   ,okOOOOOOOOOOkkxxdl,    \n");
    //         printf("\t\t\t\t    :oxkkOOOOOOOOOOOOOOOxl, .;:llc:,.       ;okOOOOOOkkdol:,.       \n");
    //         printf("\t\t\t\t     ';:loddxxxkkOOOOOOkxl;                 ,ldxkkxxdoc;.           \n");
    //         printf("\t\t\t\t          ...',:clodxxdoc;.                 .,:clllc:,.             \n");
    //         printf("\t\t\t\t                  ..',,'.                     ......   \n");
    //         puts("\t\t\t\t\t\t\tLINUX > Ruindows!");
    //         getchar();
    //     }
    //     else{
    //       system("exit");
    //     }
    system("clear");
    printf("\t\t\t\t                                          ..                            \n");
    printf("\t\t\t\t                                      ,'.                           \n");
    printf("\t\t\t\t                                                                    \n");
    printf("\t\t\t\t                                    ..                              \n");
    printf("\t\t\t\t                          :kk:    :k0KKc                            \n");
    printf("\t\t\t\t                         'K.:Xo  ;Mx..cW;                           \n");
    printf("\t\t\t\t                         .0  ld:ccK;   N:                           \n");
    printf("\t\t\t\t                          ckdkOO0KK0xo0k                            \n");
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
    puts("\t\t\t\t\t\t\tLINUX > Ruindows!");
    getchar();
}

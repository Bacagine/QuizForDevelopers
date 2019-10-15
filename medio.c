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

void medio(){

    char quest11[11];
    char resp11[] = "Steve Jobs";
    system("clear");
    printf("11) Quem fundou a Apple?\n");
    scanf(" %10[^\n]", quest11);
    while(strcasecmp(quest11, quest11)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %10[^\n]", quest11);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest12;
    char resp12 = 'a';
    system("clear");
    printf("12) Qual dessas distribuições LINUX pertence a Canonical?\n");
    printf("a)Ubuntu\n");
    printf("b)Linux Mint\n");
    printf("c)Debian\n");
    printf("d)Assembler\n");
    scanf("%c", &quest12);
    while(quest12 != resp12){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest12);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest13;
    char resp13 = 'd';
    system("clear");
    printf("13) Assembler é:\n");
    printf("a)Uma distribuição LINUX\n");
    printf("b)Uma línguagem de alto nível\n");
    printf("c)Uma marca de computadores\n");
    printf("d)Uma línguagem de baixo nível\n");
    scanf("%c", &quest13);
    while(quest13 != resp13){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest13);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest14[6];
    char resp14[] = "COBOL";
    system("clear");
    printf("14) Qual é a línguagem usada nos bancos?\n");
    scanf(" %5[^\n]", quest14);
    while(strcasecmp(quest14, resp14)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %5[^\n]", quest14);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest15[9];
    char resp15[] = "Bradesco";
    system("clear");
    printf("15) Qual é o banco que vive mudando a línguagem do seu sistema de segurança?\n");
    scanf(" %8[^\n]", quest15);
    while(strcasecmp(quest15, resp15)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %8[^\n]", quest15);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest16;
    char resp16 = 'c';
    system("clear");
    printf("16) Qual das distribuições Linux abaixo é brasileira?\n");
    printf("a) Ubuntu\n");
    printf("b) Red Hat\n");
    printf("c) Conectiva Linux\n");
    printf("d) Debian\n");
    printf("\n");
    scanf("%c", &quest16);
    while(quest16 != resp16){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest16);
    }
    puts("Correto!");
    getchar();
    getchar();


    char quest17[4];
    char resp17[] = "gcc";
    system("clear");
    printf("17) Qual o compilador da linguagem C feita pelo GNU?\n");
    scanf(" %3[^\n]", quest17);
    while(strcasecmp(quest17, resp17)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %3[^\n]", quest17);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest18[24];
    char resp18[] = "GNU Compiler Collection";
    system("clear");
    printf("18) O que significa a sigla GCC?\n");
    scanf(" %23[^\n]", quest18);
    while(strcasecmp(quest18, resp18)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %23[^\n]", quest18);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest19[7];
    char resp19[] = "Debian";
    system("clear");
    printf("19) Qual é a distribuição Linux que deu origem a maioria das distribuiçoes atuais?\n");
    scanf(" %6[^\n]", quest19);
    while(strcasecmp(quest19, resp19)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %6[^\n]", quest19);
    }
    puts("Correto!");
    getchar();
    getchar();


    char quest20;
    char resp20 = 'b';
    system("clear");
    printf("20) Quem criou o Sistema UNIX?\n");
    printf("a) Michael Jordan\n");
    printf("b) Dennis Ritchie\n");
    printf("c) Toma Hobbes\n");
    printf("d) Socrátes\n");
    printf("\n");
    scanf("%c", &quest20);
    while(quest20 != resp20){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest20);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest21;
    char resp21 = 'd';
    system("clear");
    printf("21) Qual a línguagem de programação feita pela Google?\n");
    printf("a) COBOL\n");
    printf("b) Python\n");
    printf("c) Java\n");
    printf("d) GOlang\n");
    printf("\n");
    scanf("%c", &quest21);
    while(quest21 != resp21){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest21);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest22;
    char resp22 = 'b';
    system("clear");
    printf("22) O que significa a sigla IBM?\n");
    printf("a) Institute Binary of Machines\n");
    printf("b) International Business Machines\n");
    printf("c) International Binary of Machines\n");
    printf("d) International Business of Microsoft\n");
    printf("\n");
    scanf("%c", &quest22);
    while(quest22 != resp22){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest22);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest23;
    char resp23 = 'c';
    system("clear");
    printf("23) Qual o Sistema Operacional dos hackers?\n");
    printf("a) Gentoo\n");
    printf("b) Debian\n");
    printf("c) kali linux\n");
    printf("d) Kernel\n");
    printf("\n");
    scanf("%c", &quest23);
    while(quest23 != resp23){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest23);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest24[7];
    char resp24[] = "Python";
    system("clear");
    printf("24) Qual a línguagem de programação favorita dos hackers?\n");
    scanf(" %6[^\n]", quest24);
    while(strcasecmp(quest24, resp24)){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf(" %6[^\n]", quest24);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest25;
    char resp25 = 'a';
    system("clear");
    printf("25) Quem criou o GIT?\n");
    printf("a) Linus Torvalds\n");
    printf("b) Bill Gates\n");
    printf("c) Richard Stallman\n");
    printf("d) Dennis Ritchie\n");
    printf("\n");
    scanf("%c", &quest25);
    while(quest25 != resp25){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest25);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest26;
    char resp26 = 'c';
    system("clear");
    printf("26) O que significa a sigla GPL?\n");
    printf("a) GNU Public License\n");
    printf("b) General Public License\n");
    printf("c) GNU General Public License\n");
    printf("d) General GNU Public License\n");
    printf("\n");
    scanf("%c", &quest26);
    while(quest26 != resp26){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest26);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest27;
    char resp27 = 'c';
    system("clear");
    printf("27) Qual dessas foi a primeira distribuição LINUX?\n");
    printf("a) Ubuntu\n");
    printf("b) Debian\n");
    printf("c) MCC Interim Linux\n");
    printf("d) Kernel Linux\n");
    printf("\n");
    scanf("%c", &quest27);
    while(quest27 != resp27){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest27);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest28;
    char resp28 = 'b';
    system("clear");
    printf("28) O que acontece se eu apagar o diretorio System32?\n");
    printf("a) Deixa o Windows mais rápido\n");
    printf("b) Mata o Sistema Operacional\n");
    printf("c) Instala o LINUX no PC\n");
    printf("d) Nenhuma da aslternativas anteriores\n");
    printf("\n");
    scanf("%c", &quest28);
    while(quest28 != resp28){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest28);
    }
    puts("Correto!");
    getchar();
    getchar();

    char quest29;
    char resp29 = 'c';
    system("clear");
    printf("29) O que acontece se eu rodar o comando \"rm -rf /\"?\n");
    printf("a) Deixa o PC mais rápido\n");
    printf("b) Tela azul da morte\n");
    printf("c) Apaga a raiz do sistema\n");
    printf("d) Todas as anteriores\n");
    printf("\n");
    scanf("%c", &quest29);
    while(quest29 != resp29){
        puts("Não, está errado!");
        puts("Por favor tente novamente:");
        scanf("%c", &quest29);
    }
    puts("Correto!");
    getchar();
    getchar();

    // char quest30;
    // char resp30 = "";
    // system("clear");
    // printf("30) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest30);
    // while(strcasecmp(quest30, resp30)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest30);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();

    // char quest31;
    // char resp31 = "";
    // system("clear");
    // printf("31) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest31);
    // while(strcasecmp(quest31, resp31)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest31);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest32;
    // char resp32 = "";
    // system("clear");
    // printf("32) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest32);
    // while(strcasecmp(quest32, resp32)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest32);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest33;
    // char resp33 = "";
    // system("clear");
    // printf("33) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest33);
    // while(strcasecmp(quest33, resp33)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest33);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest34;
    // char resp34 = "";
    // system("clear");
    // printf("34) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest34);
    // while(strcasecmp(quest34, resp34)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest34);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest35;
    // char resp35 = "";
    // system("clear");
    // printf("35) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest35);
    // while(strcasecmp(quest35, resp35)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest35);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest36;
    // char resp36 = "";
    // system("clear");
    // printf("36) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest36);
    // while(strcasecmp(quest36, resp36)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest36);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest37;
    // char resp37 = "";
    // system("clear");
    // printf("37) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest37);
    // while(strcasecmp(quest37, resp37)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest37);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest38;
    // char resp38 = "";
    // system("clear");
    // printf("38) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest38);
    // while(strcasecmp(quest38, resp38)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest38);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest39;
    // char resp39 = "";
    // system("clear");
    // printf("39) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest39);
    // while(strcasecmp(quest39, resp39)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest39);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest40;
    // char resp40 = "";
    // system("clear");
    // printf("40) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest40);
    // while(strcasecmp(quest40, resp40)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest40);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest41;
    // char resp41 = "";
    // system("clear");
    // printf("41) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest41);
    // while(strcasecmp(quest41, resp41)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest41);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest42;
    // char resp42 = "";
    // system("clear");
    // printf("42) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest42);
    // while(strcasecmp(quest42, resp42)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest42);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest43;
    // char resp43 = "";
    // system("clear");
    // printf("43) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest43);
    // while(strcasecmp(quest43, resp43)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest43);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest44;
    // char resp44 = "";
    // system("clear");
    // printf("44) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest44);
    // while(strcasecmp(quest44, resp44)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest44);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest45;
    // char resp45 = "";
    // system("clear");
    // printf("45) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest45);
    // while(strcasecmp(quest45, resp45)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest45);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest46;
    // char resp46 = "";
    // system("clear");
    // printf("46) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest46);
    // while(strcasecmp(quest46, resp46)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest46);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest47;
    // char resp47 = "";
    // system("clear");
    // printf("47) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest47);
    // while(strcasecmp(quest47, resp47)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest47);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest48;
    // char resp48 = "";
    // system("clear");
    // printf("48) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest48);
    // while(strcasecmp(quest48, resp48)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest48);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest49;
    // char resp49 = "";
    // system("clear");
    // printf("49) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest49);
    // while(strcasecmp(quest49, resp49)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest49);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();
    //
    // char quest50;
    // char resp50 = "";
    // system("clear");
    // printf("50) ?");
    // printf("a)\n");
    // printf("b)\n");
    // printf("c)\n");
    // printf("d)\n");
    // printf("\n");
    // scanf(" %[^\n]", quest50);
    // while(strcasecmp(quest50, resp50)){
    //   puts("Não, está errado!");
    //   puts("Por favor tente novamente:");
    //   scanf(" %10[^\n]", quest50);
    // }
    // puts("Correto!");
    // getchar();
    // getchar();

}

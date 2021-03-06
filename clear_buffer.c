/**********************************************************************************
 * Git Hub: https://github.com/Bacagine/LP-Trab02-2019-2                          *
 *                                                                                *
 * Lojinha_do_Berg é um aplicativo que controla as vendas da lojinha de           *
 * departamentos do Berg                                                          *
 *                                                                                *
 * clear_buffer.c: arquivo com o desenvolvimento do prototipo da função           *
 * clear_buffer da biblioteca buffer.h                                            *
 *                                                                                *
 * Versão: 0.1                                                                    *
 *                                                                                *
 * Desenvolvidores: Gustavo S. Bacagine       <gustavobacagine@gmail.com>         *
 * 		  			Lucas Pereira de Matos    <lucas.pereira.matos.000@gmail.com> *
 *                  Caio Elias Emerick Regino <caioregino.147@gmail.com>          *
 *                                                                                *
 * Data de inicio: 30/11/2019                                                     *
 * Data da última modificação: 30/11/2019                                         * **********************************************************************************/

#include <stdio.h>
#include "clear_buffer.h"  /* --> Biblioteca para poder usar 
                                  a função clear_buffer() */

void clear_buffer(void){
    
    char c;
    while((c = getchar()) != '\n' && c != EOF);
    
}

# Copyright (C) 2019 Gustavo Bacagine
# Makefile criado por Gustavo Bacagine \
  Data: 11/10/2019
# Quiz For Developers
# Línguagem C
# Desenvolvedor: <gustavobacagine@protonmail.com>
# Versão: 13.09.19
  
QuizForDevelopers: main.o facil.o medio.o dificil.o clear_buffer.o
	gcc -o QuizForDevelopers main.o facil.o medio.o dificil.o clear_buffer.o
main.o: main.c niveis.h
	gcc -c main.c
facil.o: facil.c
	gcc -c facil.c
medio.o: medio.c
	gcc -c medio.c
dificil.o: dificil.c
	gcc -c dificil.c
clear_buffer.o: clear_buffer.c clear_buffer.h
	gcc -c clear_buffer.c
clean:
	rm -rf *.o
realclean: clean
	rm -rf QuizForDevelopers
#install:
#	mkdir /opt/QuizForDevelopers
#	cp QuizForDevelopers icons /opt/QuizForDevelopers
#	cp QuizForDevelopers.desktop /usr/share/applications
#	chmod +x /usr/share/applications/QuizForDevelopers.desktop
#unistall:
#	rm -rf /opt/QuizForDevelopers

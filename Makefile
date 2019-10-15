# Makefile criado por Gustavo Bacagine \
  Data: 11/10/2019
# Quiz For Developers
# Línguagem C
# Desenvolvedor: <gustavobacagine@gmail.com>
# Versão: 13.09.19
  
Quiz_for_Developers: main.o facil.o medio.o dificil.o
	gcc -o Quiz_for_Developers main.o facil.o medio.o dificil.o
main.o: main.c niveis.h
	gcc -c main.c
facil.o: facil.c
	gcc -c facil.c
medio.o: medio.c
	gcc -c medio.c
dificil.o: dificil.c
	gcc -c dificil.c
clean:
	rm -rf *.o
realclean: clean
	rm -rf Quiz_for_Developers
#install:
#	mkdir /opt/QuizForDevelopers
#	cp Quiz_for_Developers icons /opt/QuizForDevelopers
#	cp QuizForDevelopers.desktop /usr/share/applications
#unistall:
#	rm -rf /opt/QuizForDevelopers

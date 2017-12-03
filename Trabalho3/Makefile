aplicacao: main.o pilhatreads.o funcoesthread.o
	gcc $(CFLAGS) -o aplicacao main.o funcoesthreads.o -lpthread
funcoesthread.o: funcoesthread.h funcoesthread.c
	gcc $(CFLAGS) -c funcoesthread.c
pilhathreads.o: pilhathreads.h pilhathreads.c
	gcc $(CFLAGS) -c pilhathreads.c -lpthread
main.o: main.c 
	gcc $(CFLAGS) -c main.c -lpthread

aplicacao: main.o pilhathreads.o funcoesthread.o
	gcc $(CFLAGS) -o aplicacao main.o funcoesthread.o pilhathreads.o -lpthread
pilhathreads.o: pilhathreads.c pilhathreads.h
	gcc $(CFLAGS) -c pilhathreads.c
funcoesthread.o: funcoesthread.h funcoesthread.c
	gcc $(CFLAGS) -c funcoesthread.c -lpthread
main.o: main.c pilhathreads.h funcoesthread.h
	gcc $(CFLAGS) -c main.c -lpthread
clean:
	rm *.o

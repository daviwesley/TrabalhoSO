aplicacao: main.o funcoesthreads.o
	gcc $(CFLAGS) -o aplicacao main.o funcoesthreads.o -lpthread
main.o: main.c funcoesthreads.h
	gcc $(CFLAGS) -c main.c -lpthread
funcoesthreads.o: funcoesthreads.c funcoesthreads.h
	gcc $(CFLAGS) -c funcoesthreads.c -lpthread

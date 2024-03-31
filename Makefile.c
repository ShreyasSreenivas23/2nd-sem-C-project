billing: main.o inputing.o choose.o billing.o
    gcc -o billing main.o inputing.o choose.o billing.o

main.o: main.c
    gcc -c -o main.o main.c

inputing.o: inputing.c
    gcc -c -o inputing.o inputing.c

choose.o: choose.c
    gcc -c -o choose.o choose.c

billing.o: billing.c
    gcc -c -o billing.o billing.c

clean:
    rm -f billing main.o inputing.o choose.o billing.o

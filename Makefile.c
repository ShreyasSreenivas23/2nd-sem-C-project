billing: main.o print.o disp.o
    gcc -o billing main.o print.o disp.o

main.o: main.c
    gcc -c -o main.o main.c

print.o: print.c
    gcc -c -o print.o print.c

disp.o: disp.c
    gcc -c -o disp.o disp.c

clean:
    rm -f billing main.o print.o disp.o

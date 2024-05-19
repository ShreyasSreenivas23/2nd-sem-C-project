billing: main.o print.o disp.o search.o
    gcc -o billing main.o print.o disp.o search.o

main.o: main.c
    gcc -c -o main.o main.c

print.o: print.c
    gcc -c -o print.o print.c

disp.o: disp.c
    gcc -c -o disp.o disp.c

search.o: search.c
    gcc -c -o search.o search.c    

clean:
    rm -f billing main.o print.o disp.o

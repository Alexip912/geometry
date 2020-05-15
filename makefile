.PHONY: all clean
FLAGS = -Wall -Werror
SRC = build/src
MAIN = bin/main

all: $(MAIN)

$(MAIN): $(SRC)/main.o $(SRC)/crossing.o $(SRC)/fname.o $(SRC)/area.o $(SRC)/perimeter.o
	gcc $(FLAGS) $(SRC)/main.o $(SRC)/crossing.o $(SRC)/fname.o $(SRC)/area.o $(SRC)/perimeter.o -o $(MAIN) -lm

$(SRC)/main.o: src/main.c
	gcc $(FLAGS) -c src/main.c -o $(SRC)/main.o

$(SRC)/crossing.o: src/crossing.c
	gcc $(FLAGS) -c src/crossing.c -o $(SRC)/crossing.o

$(SRC)/fname.o: src/fname.c
	gcc $(FLAGS) -c src/fname.c -o $(SRC)/fname.o

$(SRC)/area.o: src/area.c
	gcc $(FLAGS) -c src/area.c -o $(SRC)/area.o

$(SRC)/perimeter.o: src/perimeter.c
	gcc $(FLAGS) -c src/perimeter.c -o $(SRC)/perimeter.o

clean:
	rm -rf $(SRC)/*.o
	rm -rf bin/*

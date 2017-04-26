CC = g++
FLAGS = -Wall -Werror
EXEC = bin/ddd

SRS_BUILD = build

all: $(SRS_BUILD)/main.o $(SRS_BUILD)/func.o
	mkdir -p bin
	$(CC) $(SRS_BUILD)/main.o $(SRS_BUILD)/func.o -o $(EXEC)

$(SRS_BUILD)/main.o: src/main.cpp
	mkdir -p build
	$(CC) $(FLAGS) -c src/main.cpp -o $(SRS_BUILD)/main.o

$(SRS_BUILD)/func.o: src/func.cpp
	$(CC) $(FLAGS) -c src/func.cpp -o $(SRS_BUILD)/func.o

clean: 
	rm -rf build/*.o
           

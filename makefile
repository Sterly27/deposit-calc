CC = gcc
FLAGS = -Wall -Werror
TESTFLAG = -I src -I thirdparty -Wall -Werror

EXEC = bin/ddd
TESTEXEC = bin/ggg

SRS_BUILD = build/src
TESTBUILD = build/test

all: $(SRS_BUILD)/main.o $(SRS_BUILD)/func.o
	mkdir -p bin
	$(CC) $(SRS_BUILD)/main.o $(SRS_BUILD)/func.o -o $(EXEC)

$(SRS_BUILD)/main.o: src/main.c
	mkdir -p build
	mkdir -p build/src
	mkdir -p build/test
	$(CC) $(FLAGS) -c src/main.c -o $(SRS_BUILD)/main.o

$(SRS_BUILD)/func.o: src/func.c
	$(CC) $(FLAGS) -c src/func.c -o $(SRS_BUILD)/func.o

all: test-prog

test-prog: $(TESTBUILD)/main.o $(SRS_BUILD)/func.o $(TESTBUILD)/validation_test.o $(TESTBUILD)/deposit_test.o 
	$(CC) $(TESTBUILD)/main.o $(SRS_BUILD)/func.o $(TESTBUILD)/validation_test.o $(TESTBUILD)/deposit_test.o -o $(TESTEXEC)

$(TESTBUILD)/main.o: test/main.c
	$(CC) $(TESTFLAG) -c test/main.c -o $(TESTBUILD)/main.o 

$(TESTBUILD)/validation_test.o: test/validation_test.c
	$(CC) $(TESTFLAG) -c test/validation_test.c -o $(TESTBUILD)/validation_test.o 

$(TESTBUILD)/deposit_test.o: test/deposit_test.c
	$(CC) $(TESTFLAG) -c test/deposit_test.c -o $(TESTBUILD)/deposit_test.o

.PHONY: clean
clean: 
	rm -rf build/*.o


           

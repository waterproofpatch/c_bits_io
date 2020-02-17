SRC_DIR=src
BIN_DIR=bin
LIB_NAME=bits_io
PROG_NAME=main
INCLUDES=src/bits_io

all: dir main

dir:
	mkdir -p $(BIN_DIR)

lib: $(SRC_DIR)/$(LIB_NAME)/*.c
	# gcc -c -Wall -Werror $(SRC_DIR)/$(LIB_NAME)/*.c 
	gcc -c -Wall -Werror $^

main: lib 
	gcc -c -Wall -Werror -I$(INCLUDES) -Wall $(SRC_DIR)/*.c 
	gcc *.o -o $(BIN_DIR)/$(PROG_NAME)

run: all
	./$(BIN_DIR)/$(PROG_NAME)

clean:
	rm -rf $(BIN_DIR) *.o *.a *.so

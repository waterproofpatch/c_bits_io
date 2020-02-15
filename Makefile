SRC_DIR=src
BIN_DIR=bin
PROG_NAME=c_num_bits_set
all:
	mkdir -p $(BIN_DIR)
	gcc $(SRC_DIR)/*.c -o $(BIN_DIR)/$(PROG_NAME)

run:
	./$(BIN_DIR)/$(PROG_NAME)

clean:
	rm -rf $(BIN_DIR)

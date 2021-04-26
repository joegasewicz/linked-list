# ============================================
# Vars
# ============================================
CFLAGS=-g -Wall
TEST_SRC_FILE=test.c
TEST_FILE_BIN=test_ll
LIB_FILES=linked_list.c

build:
	gcc $(CFLAGS) -o $(TEST_FILE_BIN) $(TEST_SRC_FILE) $(LIB_FILES)

run-test:
	gcc $(CFLAGS) -o $(TEST_FILE_BIN) $(TEST_SRC_FILE) $(LIB_FILES) `pkg-config --cflags --libs cmocka`
	./$(TEST_SRC_FILE)

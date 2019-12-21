TARGET = target
OUT = $(TARGET)/raytracer
TEST_OUT = $(TARGET)/test
CC = g++
SRC = src/*
MAIN_SRC = main/*
TEST_SRC = test/test.cpp

$(): 

$(OUT): $(SRC) 
	mkdir -p $(TARGET)
	$(CC) $(SRC) $(MAIN_SRC) -o $(OUT)

$(TEST_OUT): $(TEST_SRC)
	mkdir -p $(TARGET)
	$(CC) $(SRC) $(TEST_SRC) -o $(TEST_OUT)

clean: 
	rm -Rf $(TARGET)

test: $(TEST_OUT)
	$(TEST_OUT)
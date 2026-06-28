CC = gcc
CFLAGS = --coverage -g -O0

all: test

test:
	@echo "--- Testando Bubble Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"bubble.c"' main.c -o main
	./main
	gcov main.c
	@echo "\n--- Testando Selection Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"selection.c"' main.c -o main
	./main
	gcov main.c
	@echo "\n--- Testando Insertion Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"insertion.c"' main.c -o main
	./main
	gcov main.c
	@echo "\n--- Testando Merge Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"merge.c"' main.c -o main
	./main
	gcov main.c
	@echo "\n--- Testando Quick Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"quick.c"' main.c -o main
	./main
	gcov main.c
	@echo "\n--- Testando Heap Sort ---"
	$(CC) $(CFLAGS) -DALGO_FILE='"heap.c"' main.c -o main
	./main
	gcov main.c

clean:
	rm -f main *.gcno *.gcda *.gcov
test:
	gcc -fprofile-arcs -ftest-coverage tests/test_basic.c -o tests/test_basic.exe
	./tests/test_basic.exe

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
	rm -f main *.gcno *.gcda *.gcov coverage.html tests/test_basic.exe

# Regra que compila e roda os testes estruturados da pasta tests
test_advanced:
	gcc -fprofile-arcs -ftest-coverage tests/test_basic.c -o tests/test_basic.exe
	./tests/test_basic.exe
# Regra que gera o relatório HTML detalhado exigido no edital
html: test_advanced
	gcovr -r . --html --html-details -o coverage.html
	@echo "Relatório HTML gerado com sucesso em coverage.html!"
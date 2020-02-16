CC = g++ -std=c++17
CFLAGS = -g -Wall

all:
	$(CC) $(CFLAGS) src/main.cpp -o build/meta.out
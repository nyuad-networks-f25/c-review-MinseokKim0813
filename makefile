main: main.c
	bear -- gcc main.c -o main -Wall -Wextra
	./main

clean:
	rm main

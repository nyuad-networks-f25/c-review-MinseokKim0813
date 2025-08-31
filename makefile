main: main.c status.h
	bear -- gcc main.c -o main -Wall -Wextra && ./main

clean:
	rm main

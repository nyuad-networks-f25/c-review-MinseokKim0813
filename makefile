main: main.c status.h student.h
	bear -- gcc main.c -o main -Wall -Wextra && ./main

clean:
	rm main

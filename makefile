main: main.c status.h student.h
	gcc -std=c2x main.c -o main -Wall -Wextra && ./main

selection: selection.c
	gcc -std=c2x selection.c -o selection -Wall -Wextra && ./selection

repetition: repetition.c
	gcc -std=c2x repetition.c -o repetition -Wall -Wextra && ./repetition

clean:
	rm main selection repetition
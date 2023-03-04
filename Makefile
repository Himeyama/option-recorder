CC = x86_64-w64-mingw32-gcc

option-recorder: option-recorder.c
	$(CC) $< -o $@

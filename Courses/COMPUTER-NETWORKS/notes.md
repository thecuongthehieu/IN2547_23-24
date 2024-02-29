## Lecture 01 (27/02/2024)
- Introduction
- PuTTY application
- `strace` command
- `sendto()` vs `write()` system calls
	- https://linux.die.net/man/2/sendto

## Lecture 02 (28/02/2024)
- Big Endian ~ Forward
- `char` vs `signed char`
	- https://stackoverflow.com/questions/22270918/under-what-circumstances-would-one-use-a-signed-char-in-c#:~:text=You%20would%20use%20a%20signed,single%20byte%20to%20do%20it.
- Format
	- https://cplusplus.com/reference/cstdio/printf/

## Lecture 03 (29/02/2024)
- Arrays in C do not have boundary check
- Padding in struct in C why?
	- Because it depends on the CPU architecture to have 16-bit or 32-bit registers to load the data from memory
	- Padding address could be accessed legally
-  Both Apple silicon and Intel-based Mac computers use the little-endian
	- https://developer.apple.com/documentation/apple-silicon/porting-your-macos-apps-to-apple-silicon  
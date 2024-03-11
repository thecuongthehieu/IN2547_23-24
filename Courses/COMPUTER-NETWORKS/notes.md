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

## Lecture 04 (05/03/2024)
- The bitwise NOT operator in C++ is the tilde character `~`.
- Exercises

## Lecture 05 (06/03/2024)
- Time Division Multiplexing vs Packet Switching
- Statistical multiplexing
- Lookup table in Switching
- Routing activity
- Data Plane, Control Plane, Management Plane

## Lecture 06 (07/03/2024)
- Internetworking
- How the Internet knows my computer?
	- https://superuser.com/questions/105838/how-does-router-know-where-to-forward-packet
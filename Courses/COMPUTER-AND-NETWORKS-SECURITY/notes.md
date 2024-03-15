## Lecture 01 (27/02/2024)

- SEED Labs
	- https://seedsecuritylabs.org/
	- https://github.com/seed-labs/seed-labs/blob/master/lab-setup/apple-arm/Lab_Testing.md

## Lecture 02 (28/02/2024)
- Concept

## Lecture 03 (05/03/2024)
- Multics
- Set-UID
- && and ;
	- https://unix.stackexchange.com/questions/187145/whats-the-difference-between-semicolon-and-double-ampersand 

## Lecture 04 (06/03/2024)
- Implement `myCat.c` and `dangegous.c`
- fgetc return int instead of char
	- https://stackoverflow.com/questions/49063518/why-does-fgetc-return-int-instead-of-char#:~:text=ISO%20C%20mandates%20that%20fgetc,end%2Dof%2Dfile%20indicator.
- Change ownership: `chown user:group filename`
- Diferrence of `return(1)` vs `exit(1)`
	- https://stackoverflow.com/questions/3463551/what-is-the-difference-between-exit-and-return
- Invoking Programs: Unsafe Approach
- `char` and `signed char` and `unsigned char`
	- https://stackoverflow.com/questions/48091302/when-to-use-the-plain-char-type-in-c
- 644 and 755 understanding
	- https://www.multacom.com/faq/password_protection/file_permissions.htm

## Lecture 05 (12/03/2024)
- Size of array in C? How sizeof works?
	- Your array has a static length so it can be determined at compile time
	- https://stackoverflow.com/questions/27518251/how-does-sizeof-know-the-size-of-array#:~:text=sizeof(type)%20gives%20you%20the,respective%20data%2Dtype%20size%20value.
- `execve()`
- `fork()` vs `exec()`
- Access memory beyond bound -> Undefined Behavior
- Shell Variables vs Environment Variables
	- When a shell program starts, it copies the environment variables into its
own shell variables. Changes made to the shell variable will not reflect
on the environment variables

## Lecture 06 (13/03/2024)
- `sh` is commonly symbolically linked to `bash`, `zsh`, `dash` ,...
- `strace` and `ldd ` commands
- Attack via Dynamic Linker (`sleep()`)
-  
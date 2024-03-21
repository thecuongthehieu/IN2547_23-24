#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv/*, char **envp*/)
{
	int i = 0;
	char *v[2];
	v[0] = NULL;
	v[1] = NULL;

	char *newenv[3];
	newenv[0] = NULL;
	newenv[1] = NULL;
	newenv[2] = NULL;

	if(argc != 2)
	{
		fprintf(stderr, "USAGE: %s <[1, 2, 3]>\n", argv[0]);
		exit(1);
	}

	v[0] = "/usr/bin/env";
	v[1] = NULL;

	newenv[0] = "AAA=aaa";
	newenv[1] = "BBB=bbb";
	newenv[2] = NULL;


	switch(argv[1][0])
	{
		case '1':
			execve(v[0], v, NULL);
			printf("You will never see this\n");
		break;

		case '2':
			execve(v[0], v, newenv);
			printf("You will never see this\n");
		break;

		case '3':
			execve(v[0], v, environ);
			printf("You will never see this\n");
		break;

		default:
			fprintf(stderr, "What is <%s>\n", argv[1]);
		break;
	}
}

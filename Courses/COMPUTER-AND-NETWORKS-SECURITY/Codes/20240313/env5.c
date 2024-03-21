#include <stdio.h>
#include <stdlib.h>

extern char** environ;

int main(int argc, char **argv, char **envp)
{
	int i = 0;

	char a[256] = "PIPPO=pippo";
	while(envp[i] != NULL)
	{
		printf("%s\n", envp[i++]);
	}

	putenv(a);

	i = 0;
	while(envp[i] != NULL)
	{
		printf("%s\n", envp[i++]);
	}

	printf("-----------------------------------\n\n\n");

	i = 0;
	while(environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}

	printf("-----------------------------------\n\n\n");
	a[0] = 'l';
	i = 0;
	while(environ[i] != NULL)
	{
		printf("%s\n", environ[i++]);
	}


}

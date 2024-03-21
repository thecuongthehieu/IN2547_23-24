#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char **argv)
{
	int uid = -1, euid = -1;
	uid = (int)getuid();
	euid = (int)geteuid();

	
	if(argc != 2)
	{
		fprintf(stderr, "USAGE: %s <filename>\n", argv[0]);
		exit(1);
	}

	char* cat = "cat";

	int len = strlen(cat) + strlen(argv[1]) + 2;
	char command[len];

	sprintf(command, "%s %s", cat, argv[1]);

	system(command);

	printf("uid: %d\teuid:%d\n", uid, euid);
}

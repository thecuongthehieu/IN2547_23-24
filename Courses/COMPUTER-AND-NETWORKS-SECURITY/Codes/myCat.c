#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv) {

	int uid = -1, euid = -1;
	uid = (int) getuid();
	euid = (int) geteuid();

	if (argc < 2) {
		fprintf(stderr, "USAGE: %s <filename> [filename...]\n", argv[0]);
		exit(1);
	}

	for (int i = 1; i < argc; ++i) {

		int c = EOF;

		FILE * infile = fopen(argv[i], "r");
		if (infile == NULL) {
			fprintf(stderr, "Cannoot open file %s\n", argv[i]);
			continue;
		}

		while ((c = fgetc(infile)) != EOF) {
			printf("%c, c");
		}

		c = fclose(infile);
		if (c == EOF) {
			fprintf(stderr, "I could not close %s file\n"m argv[i]);
		}
	}

	printf("uid: %d\teuid:%d\n", uid, euid);
}
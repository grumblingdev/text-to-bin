#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	if (argc < 2) return 0;

	char mode[4];
	fgets(mode, 4, stdin);

	char ch;

	for (int i = 0; i < strlen(argv[1]); i++) {
		ch = argv[1][i];
		if (strcmp(mode, "bin") == 0) printf("%b ", ch);
		else if (strcmp(mode, "hex") == 0) printf("%X ", ch);
		else return 0;
	}
	putchar('\n');
	return 0;
}

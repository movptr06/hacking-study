#include <stdio.h>
#include <string.h>

int main(void) {
	char buf[64];
	printf("Input: ");
	gets(buf);
	if(!strcmp(buf, "Hacking_Study")) {
		puts("CORRECT!");
	} else {
		puts("NOPE!");
	}
	return 0;
}

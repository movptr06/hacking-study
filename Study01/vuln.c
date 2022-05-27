#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int hack(void) {
	puts("nwwthw{You_are_not_super_N00B}");
	exit(0);
}

int main(void) {
	char buf[64];
	read(0, buf, 1024);
	return 0;
}


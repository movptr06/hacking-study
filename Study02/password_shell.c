//There are many ways to attack this program.

#include <stdio.h>
#include <string.h>
#include <string.h>
#include <unistd.h>

int shell(void) {
	setuid(0);
	setgid(0);
	system("/bin/sh");
	return 0;
}

int main(void) {
	FILE *fp;
	char buf[20];
	char pass[20];
	fp = fopen("./pass", "rt");
	fgets(pass, sizeof(pass), fp);
	fclose(fp);
	printf("Password: ");
	fgets(buf, 1024, stdin);
	if(!strcmp(buf, pass)) shell();
	else puts("Authentication failure");
	return 0;
}

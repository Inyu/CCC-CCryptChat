#include <stdio.h>
#include <conio.h>
#include <time.h>

void output(const char logpath[100]);

struct User {
	char name[50];
	time_t lastlogin;
};

typedef struct User User;

int main(void) {
	User test;
	test.lastlogin = time(NULL);
	const char logpath[100] = "testlog.txt";
	
	output(logpath);

	printf("\n\n ||END OF 0.0.2|| \n\n");
	_getch();
	return 1;
}

void output(const char logpath[100]) {
	FILE *log;
	char current;

	log = fopen(logpath, "r+");
		if (log != NULL) {
			current = fgetc(log);
			while (current != EOF) {
				fputc(current, stdout);
				current = fgetc(log);
			}
		}
		else printf("ERROR 001");
		
}
#include <stdio.h>
#include <conio.h>
#include <time.h>
struct User {
	char name[50];
	time_t lastlogin;
};

typedef struct User User;

int main(void) {
	User test;
	test.lastlogin = time(NULL);
	const char logpath[100] = "testlog.txt";
	FILE *log;

	//Add filetransfer from server here
	//Opening Testlog here

	log = fopen(logpath, "r+");
	if (log != NULL) {

	}
	else {
		printf("The logfile %s could not be opened. Please try again.", logpath);
	}
	

	_getch();
	return 1;
}
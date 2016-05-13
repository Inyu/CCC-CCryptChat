#include <stdio.h>
#include <conio.h>
#include <time.h>

void output(const char logpath[100]);

struct User {
	char name[50];
	time_t lastloginTimestamp;
};

typedef struct User User;

int main(void) {
	User test;
	const char logpath[100] = "testlog.txt";
	const char key[100] = "rB880$561k9xs0n6Zk917d59F3R7e30$2L7674F1O53aVnhI3rS*!12QG899c6I265D784U822IRy#W175628Xw5p4v274DJg8c"; //KEY IN PLAINTEXT: MUCH SECÙRE, SUCH SAFE
	
	time(&test.lastloginTimestamp);
	printf("%lld\n", (long long)test.lastloginTimestamp);

	output(logpath);

	printf("\n\n ||END OF 0.0.2|| \n\n");
	_getch();
	return 1;
}

void output(const char logpath[100]) {
	FILE *log;
	char current;

	log = fopen(logpath, "r+t");
		if (log != NULL) {
			current = fgetc(log);
			while (current != EOF) {
				fputc(current, stdout);
				current = fgetc(log);
			}
		}
		else printf("ERROR 001");
}
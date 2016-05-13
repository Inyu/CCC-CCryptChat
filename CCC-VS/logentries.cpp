#include <stdio.h>
#include <time.h>
struct logentry{
char user[15],message[100]="\0";
time_t timestamp;
};
typedef struct logentry logentry;
int main(void){
FILE* f1;
logentry logentry1;
int i;
do{
    printf("Username: ");
    scanf("%s",logentry1.user);
    logentry1.timestamp = time(NULL);
    printf("\nMessage: ");
    scanf("%s",logentry1.message);

    f1=fopen("D:\\C Projects\\CCC-CCryptChat\\CCC-VS\\testlog.txt","wt");
    fputc(logentry1.user,f1);
    fputc(logentry1.message,f1);
    fputc(logentry1.timestamp,f1);
    fputc(10,f1);
    i++;
}while (i<10000);
}

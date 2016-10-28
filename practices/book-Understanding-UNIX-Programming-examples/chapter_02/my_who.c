#include <stdio.h>
#include <utmp.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void show_info(struct utmp *record);

int main(void){
    struct utmp cur_record;
    int utmpfd;
    int recLen = sizeof(cur_record);
    if((utmpfd = open(UTMP_FILE, O_RDONLY)) == -1){
        perror(UTMP_FILE);
        exit(1);
    }
    while(read(utmpfd, &cur_record, recLen) == recLen){
        show_info(&cur_record);
    }
    close(utmpfd);
    return 0;
}

void show_info(struct utmp *record){
    char *timestr;
    time_t temp;
    if(record->ut_type != USER_PROCESS){
        return;
    }
    temp = record->ut_tv.tv_sec;
    timestr = ctime(&temp);
    printf("%-8.8s ", record->ut_user);
    printf("%-8.8s ", record->ut_line);
    printf("%-12.12s ", timestr + 4);
    printf("\n");
}

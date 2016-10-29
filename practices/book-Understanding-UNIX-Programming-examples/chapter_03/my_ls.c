#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void do_ls(char *dirname);

int main(int argc, char **argv){
    char curdir[] = ".";
    if(argc == 1){
        do_ls(curdir);
    }else{
        while(--argc){
            printf("%s:\n", *++argv);
            do_ls(*argv);
        }
    }
    return 0;
}

void do_ls(char *dirname){
    DIR *dir_ptr;
    struct dirent *direntp;
    if((dir_ptr = opendir(dirname)) == NULL){
        fprintf(stderr, "my_ls:can't open %s\n", dirname);
    }else{
        while((direntp = readdir(dir_ptr)) != NULL){
            printf("%s\n", direntp->d_name);
        }
        closedir(dir_ptr);
    }
}

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFERSIZE 4096
#define COPYMODE 0644

int main(int argc, char **argv){
    int src_fp, dst_fp, chars;
    char buf[BUFFERSIZE];
    if(argc != 3){
        fprintf(stderr, "usage: %s source destination\n", *argv);
        exit(1);
    }
    //打开源文件
    if((src_fp = open(argv[1], O_RDONLY)) == -1){
        fprintf(stderr, "Error: Can't open ");
        perror(argv[1]);
        exit(1);
    }
    //创建新文件
    if((dst_fp = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, COPYMODE)) == -1){
        fprintf(stderr, "Error: Can't create ");
        perror(argv[2]);
        exit(1);
    }
    //复制文件
    while((chars = read(src_fp, buf, BUFFERSIZE)) > 0){
        if(write(dst_fp, buf, chars) != chars){
            fprintf(stderr, "Write error to  ");
            perror(argv[2]);
            exit(1);
        }
    }
    //如果读取源文件失败
    if(chars == -1){
        fprintf(stderr, "Read error from ");
        perror(argv[1]);
        exit(1);
    }
    //最后关闭文件描述符
    if(close(src_fp) == -1 || close(dst_fp) == -1){
        fprintf(stderr, "Error closing files");
    }
    return 0;
}

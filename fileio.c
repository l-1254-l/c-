#include <stdio.h>
#include <string.h>

int  main(){

    FILE *  fd = fopen("test.txt","a+");
    if(fd == NULL){
        perror("fopen filed\n");
        return -1;
    }
    //写单个字符
    if(fputc('A', fd) == EOF){
        printf("写入一个字符失败");
        return -1;
    }
    //移动光标
    fseek(fd, 0, SEEK_SET);

    //读取单个字符
    int ch;
    if ((ch = fgetc(fd))!= EOF)
    {
        putchar(ch);
    }
    
    //行级读写
    

    fclose(fd);

}
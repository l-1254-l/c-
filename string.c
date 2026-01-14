#include <stdio.h>
#include <string.h>

int  main(){
    char str1 []= "hello  world";
    char str2 [16];
    //计算字符串长度
    int i=strlen(str1);
    printf("字符串长度为%d\n",i);

    //strcpy和strncpy区别
    strcpy(str2,str1);
    printf("%s\n",str2);
    memset(str2, 0, 15);
    strncpy(str2, str1, 3);
    printf("%s\n",str2);
    printf("string族函数康复训练");
    return 0;

}
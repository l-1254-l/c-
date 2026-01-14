#include <stdio.h>
#include <string.h>

int  main(){
    char str1 []= "hello  world";
    char str2 [16];

    printf("这是string族函数康复训练");

    //计算字符串长度
    int i=strlen(str1);
    printf("字符串长度为%d\n",i);

    //strcpy和strncpy区别
    //strcpy会复制 \0 strncpy需要手动加\0
    strcpy(str2,str1);
    printf("%s\n",str2);
    memset(str2, 0, 15); //第二个参数0  不是数字0是ASCII码0  对应的是\0
    strncpy(str2, str1, 3);
    printf("%s\n",str2);
    
    //字符串拼接 strcat 完整拼接源字符串到目标字符串末尾  strncat 最多拼接n个字符串到目标字符串末尾
    
    strcat(str2, str1);
    printf("%s\n",str2);
    strncat (str2, str1, sizeof(str2) - strlen(str2) - 1);
    printf("%s\n",str2);

    //字符查找
    /*
        strchr() 从左到右查找单个字符
        strrchr（） 从右到左查找单个字符

    */
   //字符串查找
    char *j= (str2,str1);
    printf("字符串str1出现的位置及以后字符串%s\n", j);

    //字符串分割函数  strtok  首次调用：传入可写的字符数组（不可是只读字符串指针），作为分割的原始数据    后续调用：传入 NULL，表示继续分割上一次未处理完的字符串 函数内部会保存上次分割的位置，无需手动传递
    char *k = strtok(str2, " ");
    printf("str2按照空格分割后的字符串 %s\n", k);

    return 0;

}
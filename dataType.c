#include <stdio.h>
#include <stdbool.h>

int  main(){

    //基本数据类型大小
    printf("int型大小:%d\n",sizeof(int));

    printf("short型大小:%d\n",sizeof(short));

    printf("long型大小:%d\n",sizeof(long));

    printf("float型大小:%d\n",sizeof(float));

    printf("double型大小:%d\n",sizeof(double));

    printf("bool型大小:%d\n",sizeof(bool));


    //结构体 
    struct student
    {
        int  id;
        char * name;

    };
    
    struct student li= {10,"liutengfei"};
    printf("id:%d\n",li.id);
    printf("id:%s\n",li.name);
    //枚举
    enum weeek{
        a,
        b,
        c

    };
    //共用体 联合体
    union data
    {
        int  i;
        char  j;
    };
    


    return 0;
}
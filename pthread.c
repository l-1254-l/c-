#include <stdio.h>
#include <pthread.h>

// ?????к???
void *thread_func(void *arg) {
    printf("???????????\n");
    pthread_exit(NULL);  // ????????
}


int main(){

    
    pthread_t  id;
    //线程创建函数  参数1.线程id  2.线程属性参数 （线程分离 线程的栈大小 NULL为默认参数 ） 3.线程处理函数（参数和返回值都是void *）   4.线程入口函数的参数
    int ret = pthread_create(&id ,NULL, thread_func, NULL);
    
    if(ret !=0){
        printf("????????????");
        return -1;
    }
    //线程等待（回收）  阻塞等待指定的线程终止，并回收该线程的资源（避免 “僵尸线程”），同时可以获取线程的返回值
    pthread_join(id,NULL);

    //线程主动退出函数  参数 线程的返回值
    //pthread_exit(NULL);
    //线程分离
    //pthread_detach();
    return 0;
}
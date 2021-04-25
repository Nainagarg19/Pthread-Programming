#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *worker_thread(void *arg)
{
        pthread_exit((void*)911);
}

int main()
{
        int i;
        pthread_t thread;
        pthread_create(&thread, NULL, worker_thread, NULL);
        pthread_join(thread, (void **)&i);
        printf("%d\n",i);

}

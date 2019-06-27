#include <stdio.h>
#include <stdlib.h>

typedef struct task{
	void (*func)(void*);
	void *arg;
	struct task* next;
}task_t;y
typedef struct threa_pool
{
	pthread_mutex_t lock;
	pthread_cond_t cond;
	pthread_t *threads;
	task
}













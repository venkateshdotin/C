/* Simple C program with the pthread_create and pthread_join
 *
 *
 * pthread_create: used to create a new thread
 *
 * int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg);
 *
 *      @ Parameters:
 *      @ thread: pointer to an unsigned integer value that returns the thread id of the thread created.
 *      @ attr: pointer to a structure that is used to define thread attributes like detached state, scheduling policy, stack address, etc. Set to NULL for default         thread attributes.
 *      @ start_routine: pointer to a subroutine that is executed by the thread. The return type and parameter type of the subroutine must be of type void *.
 *      The function has a single attribute but if multiple values need to be passed to the function, a struct must be used.
 *      @ arg:pointer to void that contains the arguments to the function defined in the earlier argument
 *
 * pthread_join: used to wait for the termination of a thread.
 *    Syntax:
 *      int pthread_join(pthread_t th, void **thread_return);
 *
 *    Parameter: This method accepts following parameters:
 *    @ th: thread id of the thread for which the current thread waits.
 *    @ thread_return: pointer to the location where the exit status of the thread mentioned in th is stored.
 *
 * */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

void* yourturn(void *arg)
{
	int *ptr = (int *) malloc(sizeof(int));
	*ptr=10;
        for(int i = 0; i<= 8;i ++)
        {
                sleep(1);
                printf("Yourturn :%d: and ptr :%d\n", i, *ptr);
		(*ptr)++;
        }
        return ptr;
}

void myturn()
{
        for(int i = 0; i<= 5;i ++)
        {
                sleep(1);
                printf("Myturn: %d\n", i);
        }
}

int main()
{
        pthread_t newthread;
	int *result;
        pthread_create(&newthread, NULL, yourturn, NULL);
//      yourturn();
        myturn();
        pthread_join(newthread,(void *)&result);
	printf("Thread is done result = %d\n", *result);
        return 0;

}

